#include <stdio.h>//�ڴ�������
int memory_display(long unsigned int addr)
//�� 16 ������� addr ��ʼ�� 16 ���ڴ��ֽڵ�Ԫ
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
 printf("i = 0x%X\n",i); //16 ������ʾ����ֵ
 printf("int i memory address is 0x%lX\n",(long unsigned long)&i);//��ʾ�������ڴ��ַ 
 memory_display((long unsigned long)&i - 16); //��ʾ i ����֮ǰ�� 16 ���ڴ浥Ԫ
 memory_display((long unsigned long)&i);//��ʾ i ����֮��� 16 ���ڴ浥Ԫ
 printf("\n");
 
 double d=1.5e100;
 printf("d = 0x%X\n",d); //16 ������ʾ����ֵ
 printf("int d memory address is 0x%lX\n",(long unsigned long)&d);//��ʾ�������ڴ��ַ 
 memory_display((long unsigned long)&d - 16); //��ʾ i ����֮ǰ�� 16 ���ڴ浥Ԫ
 memory_display((long unsigned long)&d);//��ʾ i ����֮��� 16 ���ڴ浥Ԫ
 printf("\n");
 
 float f=1.5678e3;
 printf("f = 0x%X\n",f); //16 ������ʾ����ֵ
 printf("int f memory address is 0x%lX\n",(long unsigned long)&f);//��ʾ�������ڴ��ַ 
 memory_display((long unsigned long)&f - 16); //��ʾ i ����֮ǰ�� 16 ���ڴ浥Ԫ
 memory_display((long unsigned long)&f);//��ʾ i ����֮��� 16 ���ڴ浥Ԫ
 printf("\n");
 
 char c='A'; 
 printf("c = 0x%X\n",c); //16 ������ʾ����ֵ
 printf("int c memory address is 0x%lX\n",(long unsigned long)&c);//��ʾ�������ڴ��ַ 
 memory_display((long unsigned long)&c - 16); //��ʾ i ����֮ǰ�� 16 ���ڴ浥Ԫ
 memory_display((long unsigned long)&c);//��ʾ i ����֮��� 16 ���ڴ浥Ԫ
 printf("\n");
 
} 
