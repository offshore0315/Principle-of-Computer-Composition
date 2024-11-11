#include <stdio.h>
#include <string.h>
#include <time.h>
#define NUM 32

double A[NUM][NUM], B[NUM][NUM], C[NUM][NUM];

void Muti2(double A[][NUM], double B[][NUM], double C[][NUM], int n){
 int i, j, k;
 double sum = 0;
 for (j = 0;j < n;j++)
 for(k = 0;k < n; k++){
 sum = B[k][j]; //B 按列访问
 for (i = 0;i < n;i++)
 C[i][j] += A[i][k] *sum; //C 按列访问，A 按列访问
 }
}

int main() {
 clock_t start, finish; //定义 CPU 时钟单位
 double Total_time; //定义一个 double 类型的变量，用于存储时间单位
 start = clock(); //获取当前时间
//----测试时间 的代码
// int i = 100000L;
// while (i--);
 Muti2(A, B, C, NUM);//---
 finish = clock(); //获取执行完后的 CPU 时间
 Total_time = (double)(finish - start) / CLOCKS_PER_SEC; //单位换算，换算成毫秒
 printf("\n 函数运行时间：%0.3f 毫秒 \n", Total_time); //打印小数点的后三位，毫秒为单位
 return 0;
}//测试程序2 

//#include <stdio.h>
//#include <string.h>
//#include <time.h>
//#define NUM 512
//double A[NUM][NUM], B[NUM][NUM], C[NUM][NUM];
//void Muti1(double A[][NUM], double B[][NUM], double C[][NUM], int n) {
// int i, j, k;
// double sum = 0;
// for (k = 0; k < n; k++)
//  for (i = 0; i < n; i++) {
//   sum = A[i][k]; //A 按列访问
//   for (j = 0; j < n; j++)
//    C[i][j] += B[k][j] * sum; //C 按行访问，B 按行访问
//  }
//}
//int main() {
// clock_t start, finish; //定义 CPU 时钟单位
// double Total_time; //定义一个 double 类型的变量，用于存储时间单位
// start = clock(); //获取当前时间
////----测试时间 的代码
//// int i = 100000L;
//// while (i--);
// Muti1(A, B, C, NUM);//---
// finish = clock(); //获取执行完后的 CPU 时间
// Total_time = (double)(finish - start) / CLOCKS_PER_SEC; //单位换算，换算成毫秒
// printf("\n 函数运行时间：%0.3f 毫秒 \n", Total_time); //打印小数点的后三位，毫秒为单位
// return 0;
//}测试程序1 
