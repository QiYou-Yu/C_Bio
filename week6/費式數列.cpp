//�^�a�@�~:�ϥλ��j�覡�D�O��ƦC(Fibonacci)
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
	printf("�D�O���ƦC\n");
	printf("�п�Jn: ");
	scanf("%d",&num);
	printf("F(%d)=%d",num,fib(num));
}




