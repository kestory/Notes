#include <stdlib.h>
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define dprint(expr) printf(#expr "= %x\n",expr);
int main(int argc, char *argv[]) {
	struct in_addr inaddr;
	unsigned int addr;
	if (argc!=2){
		fprintf(stderr, "usage %s <hex number>\n", argv[0]);
		exit(0);
	}
	sscanf(argv[1],"%x",&addr);
	//dprint(addr)	addr= 1074566413	the decimal form of addr
	inaddr.s_addr=htonl(addr);
	dprint(inaddr.s_addr)//inaddr.s_addr= f2c20280
	printf("%s\n",inet_ntoa(inaddr));//IP -> Dotted Decimal Notation
	exit(0);
}
