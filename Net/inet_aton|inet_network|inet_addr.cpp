inet_aton和inet_network和inet_addr三者比较
http://roclinux.cn/?p=1160
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
int main()
{
  char str[]="255.255.255.255";
  in_addr_t r1,r2,r3;
  struct in_addr inp;
  r1=inet_addr(str);
  if(r1==-1){
    printf("inet_addr return -1 when 255.255.255.255\n");
  }else{
    printf("inet_addr:ip=%lu\n",ntohl(r1));//%lu（32位无符号整数） -> %x 更形象
  }
  r2=inet_network(str);
  if(r2==-1){
    printf("inet_network return -1 when 255.255.255.255\n");
  }else{
    printf("inet_network:ip=%lu\n",r2);
  }
  r3=inet_aton(str,&inp);
  if(r3==0){
    printf("inet_aton return -1 when 255.255.255.255\n");
  }else{
    printf("inet_aton:ip=%lu\n",ntohl(inp.s_addr));
  }
  return 0;
}
~~~~~~~~~~~~~~~~~~~255.255.255.255
inet_addr return -1 when 255.255.255.255
inet_network return -1 when 255.255.255.255
inet_aton:ip=4294967295
~~~~~~~~~~~~~~~~~~~255.255.255.254
inet_addr:ip=4294967294
inet_network:ip=4294967294
inet_aton:ip=4294967294
~~~~
inet_addr:ip=fffffffe//ntohl了
inet_network:ip=fffffffe
inet_aton:ip=fffffffe//ntohl了

