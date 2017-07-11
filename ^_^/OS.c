//内嵌汇编例子
#include <stdio.h>
int main(void){
	int result=2;
	int input=1;
	__asm__ __volatile__("addl %2,%0":"=r"(result):"r"(result),"m"(input));
	printf("%d\n",result);
	return 0;
}
#include <stdio.h>
int main(void){
	int count=3;
	int value=1;
	int buf[10];
	asm(
		"cld \n\t"
		"rep \n\t"
		"stosl"
		:
		:"c"(count),"a"(value),"D"(buf));
	printf("%d %d %d\n", buf[1],buf[1],buf[2]);

}

//汇编指令
"汇编in和out实例解析
IN AL,21H　　从21H端口读取一字节数据到AL
IN AX,21H　　从端口地址21H读取1字节数据到AL，从端口地址22H读取1字节到AH

MOV DX,379H
IN AL,DX 　　从端口379H读取1字节到AL

OUT 21H,AL　　将AL的值写入21H端口
OUT 21H,AX　　将AX的值写入端口地址21H开始的连续两个字节。（port[21H]=AL,port[22h]=AH）

MOV DX,378H
OUT DX,AX 　　将AH和AL分别写入端口379H和378H
"
cli是关中断，防止有些硬件中断对程序的干扰
sti是开中断，允许硬件中断

远程跳转／长跳转 & 子过程调用：ljmp    lcall
相应返回指令：lret

 orb $0x01, %al
 把al与 0x01 按位与 -> al

LDGT 指令将 GDT 的入口地址装入 GDTR
在从实模式切换到保护模式之前，首先是要建立合适的全局描述符表GDT，并使用48位指针gdtdesc指向该GDT。
.p2align 2；强制4(2^2)字节对齐，即16位对齐

 .byte 0,0x9a,0xcf,0
 第 5、6 位字节为
<stdint.h>//OSLab的请看源代码
typedef signed char int8_t;		typedef unsigned char uint8_t;
typedef short int16_t;			typedef unsigned short uint16_t;
typedef long int32_t;			typedef unsigned long uint32_t;
typedef long long int64_t;		typedef unsigned long long uint64_t;

