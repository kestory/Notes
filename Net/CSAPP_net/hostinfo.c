#include <stdlib.h>
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#define dprint(expr) printf(#expr "= %d\n",expr)
int main(int argc, char *argv[]) {
	char **pp;
	struct in_addr addr;
	struct hostent *hostp;

	if(argc!=2){
		fprintf(stderr, "usage: %s <domain name or dotted-decimal>\n",argv[0]);
		exit(0);
	}

	if(inet_aton(argv[1], &addr)!=0)
		hostp=gethostbyaddr((const char *)&addr,sizeof(addr),AF_INET);
	else
		hostp=gethostbyname(argv[1]);

	//dprint(hostp->h_length);//hostp->h_addrtype=2  hostp->h_length=4  for:google.com  cs.nju.edu.cn
	printf("official hostname: %s\n",hostp->h_name);

	for(pp=hostp->h_aliases;*pp!=NULL;pp++)
		printf("alias: %s\n",*pp);

	for(pp=hostp->h_addr_list;*pp!=NULL;pp++){
		addr.s_addr=((struct in_addr *)*pp)->s_addr;
		printf("address: %s\n", inet_ntoa(addr));
	}
	exit(0);
}
