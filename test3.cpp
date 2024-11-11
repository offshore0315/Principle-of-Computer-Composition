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
 sum = B[k][j]; //B ���з���
 for (i = 0;i < n;i++)
 C[i][j] += A[i][k] *sum; //C ���з��ʣ�A ���з���
 }
}

int main() {
 clock_t start, finish; //���� CPU ʱ�ӵ�λ
 double Total_time; //����һ�� double ���͵ı��������ڴ洢ʱ�䵥λ
 start = clock(); //��ȡ��ǰʱ��
//----����ʱ�� �Ĵ���
// int i = 100000L;
// while (i--);
 Muti2(A, B, C, NUM);//---
 finish = clock(); //��ȡִ������ CPU ʱ��
 Total_time = (double)(finish - start) / CLOCKS_PER_SEC; //��λ���㣬����ɺ���
 printf("\n ��������ʱ�䣺%0.3f ���� \n", Total_time); //��ӡС����ĺ���λ������Ϊ��λ
 return 0;
}//���Գ���2 

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
//   sum = A[i][k]; //A ���з���
//   for (j = 0; j < n; j++)
//    C[i][j] += B[k][j] * sum; //C ���з��ʣ�B ���з���
//  }
//}
//int main() {
// clock_t start, finish; //���� CPU ʱ�ӵ�λ
// double Total_time; //����һ�� double ���͵ı��������ڴ洢ʱ�䵥λ
// start = clock(); //��ȡ��ǰʱ��
////----����ʱ�� �Ĵ���
//// int i = 100000L;
//// while (i--);
// Muti1(A, B, C, NUM);//---
// finish = clock(); //��ȡִ������ CPU ʱ��
// Total_time = (double)(finish - start) / CLOCKS_PER_SEC; //��λ���㣬����ɺ���
// printf("\n ��������ʱ�䣺%0.3f ���� \n", Total_time); //��ӡС����ĺ���λ������Ϊ��λ
// return 0;
//}���Գ���1 
