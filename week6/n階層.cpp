//回家作業:使用遞迴方式求階乘(Factorial)
#include <stdio.h>
int fac(int);
int fac(int num)
{
	if(num>0){
		return (num*fac(num-1));
	}
	else{
		return 1;
	}
}
int main(){
	int num=0;
	printf("求n階層\n");
	printf("請輸入n:");
	scanf("%d",&num);
	printf("%d!=%d",num,fac(num));
}

