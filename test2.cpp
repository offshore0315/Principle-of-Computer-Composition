#include <stdio.h>//内存对齐测试
int memory_display(long unsigned int addr)
//以 16 进制输出 addr 开始的 16 个内存字节单元
{
 int i, j;
 for(i=0;i<4;i++)
    {
       printf("0x%lX:\t",addr + i * 4);
       for(j=0;j<4;j++)
       {
         printf("0x%X \t ", *(unsigned char*)(addr + i * 4 + j));
        }
        printf("\n");
    }
}
int main()
{
	
 int i = 785; 
 printf("i = 0x%X\n",i); //16 进制显示变量值
 printf("int i memory address is 0x%lX\n",(long unsigned long)&i);//显示变量的内存地址 
 memory_display((long unsigned long)&i - 16); //显示 i 变量之前的 16 个内存单元
 memory_display((long unsigned long)&i);//显示 i 变量之后的 16 个内存单元
 printf("\n");
 
 double d=1.5e100;
 printf("d = 0x%X\n",d); //16 进制显示变量值
 printf("int d memory address is 0x%lX\n",(long unsigned long)&d);//显示变量的内存地址 
 memory_display((long unsigned long)&d - 16); //显示 i 变量之前的 16 个内存单元
 memory_display((long unsigned long)&d);//显示 i 变量之后的 16 个内存单元
 printf("\n");
 
 float f=1.5678e3;
 printf("f = 0x%X\n",f); //16 进制显示变量值
 printf("int f memory address is 0x%lX\n",(long unsigned long)&f);//显示变量的内存地址 
 memory_display((long unsigned long)&f - 16); //显示 i 变量之前的 16 个内存单元
 memory_display((long unsigned long)&f);//显示 i 变量之后的 16 个内存单元
 printf("\n");
 
 char c='A'; 
 printf("c = 0x%X\n",c); //16 进制显示变量值
 printf("int c memory address is 0x%lX\n",(long unsigned long)&c);//显示变量的内存地址 
 memory_display((long unsigned long)&c - 16); //显示 i 变量之前的 16 个内存单元
 memory_display((long unsigned long)&c);//显示 i 变量之后的 16 个内存单元
 printf("\n");
 
} 
