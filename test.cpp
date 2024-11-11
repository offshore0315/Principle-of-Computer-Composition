#include<stdio.h>
int main() {
	int i=785,i1;
	float f=1.5678e3,f1,f2,f3;
	double d=1.5e100;
	
    i1=(int)(float)i;
	printf("%d\n",i);
	printf("%x\n", i);
	printf("%d\n",i1);
	printf("%x\n", i1);
	printf("\n");
	
	f1=(float)(int)f;
	printf("%f\n",f);
	printf("%lx\n", *((unsigned long *)&f));
	printf("%f\n",f1);
	printf("%lx\n", *((unsigned long *)&f1));
	printf("\n");

	
	f2=(float)(double)f;
	printf("%f\n",f);
	printf("%lx\n", *((unsigned long *)&f));
	printf("%f\n",f2);
	printf("%lx\n", *((unsigned long *)&f2));
	printf("\n");
	
	f3=(d+f)-d;
	printf("%f\n",f);
	printf("%lx\n", *((unsigned long *)&f));
	printf("%f\n",f3);
	printf("%lx\n", *((unsigned long *)&f3));
	printf("\n");	
}

