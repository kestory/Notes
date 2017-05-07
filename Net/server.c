#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
//http://staff.ustc.edu.cn/~mengning/np/linux_socket/new_page_4.htm
void error(char *msg){
  perror(msg);//msg: xxx
  exit(1);
}
int main(int argc, char const *argv[])
{
  int sockfd, newsockfd, portno, clilen;//监听端口，数据端口，端口号，客户端地址长度
  char buffer[256];
  struct sockaddr_in serv_addr, cli_addr;//DS sockaddr_in is in <netinet/in.h> 服务器和客户端地址信息
  int n;//read()&write()的字符数量
  if(argc<2){
    fprintf(stderr, "ERROR, no port provided\n");
    exit(1);
  }
  sockfd=socket(AF_INET, SOCK_STREAM, 0);
  if(sockfd<0)
    error("ERROR opening socket");
  bzero((char *)&serv_addr,sizeof(serv_addr));//initialize to all 0
  portno=atoi(argv[1]);
  serv_addr.sin_family=AF_INET;
  serv_addr.sin_port=htons(portno);//将 端口号 从 主机字节序 转换为 网络字节序
  serv_addr.sin_addr.s_addr=INADDR_ANY;//0.0.0.0 不指定IP地址（用于Server程序）
  if(bind(sockfd,(struct sockaddr *) &serv_addr,
    sizeof(serv_addr))<0)
    error("ERROR on binding");
  listen(sockfd,5);//积压队列长度，通常为5
  clilen=sizeof(cli_addr);
  newsockfd=accept(sockfd,(struct sockaddr *) &cli_addr, &clilen);
  if(newsockfd<0)
    error("ERROR on accept");
  bzero(buffer,256);
  n=read(newsockfd,buffer,255);
  if(n<0) error("ERROR reading from socket");
  printf("Here is the message: %s\n", buffer);
  n=write(newsockfd,"I got your message ", 18);
  if(n<0) error("ERROR writing to socket");
  return 0;
}
