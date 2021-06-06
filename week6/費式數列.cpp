//回家作業:使用遞迴方式求費氏數列(Fibonacci)
#include <stdio.h>
#include <stdlib.h>
int fib(int);

int fib(int num)
{
	if (num==1 || num==2)
		return 1;
	else
		return fib(num-1) + fib(num-2);
}
int main(){
	int num=0;
	printf("求費式數列\n");
	printf("請輸入n: ");
	scanf("%d",&num);
	printf("F(%d)=%d",num,fib(num));
}




