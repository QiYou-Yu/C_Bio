#include<stdio.h>
#define f(l) l*l*l
int main(){
	int l;
	printf("請輸入正方體邊長:");
	scanf("%d",&l);
	printf("正方形體積為:%d",f(l));
}
/*
#include <stdio.h>
int sum(int);
int main(){
	int num;
	printf("求1+2+3+...+n\n");
	printf("請輸入n:");
	scanf("%d",&num);
	sum(num);
	printf("總和=%d",sum(num));
}
int sum(int num)
{
	if(num>0){
		return (num+sum(num-1));
	}
	else{
		return 0;
	}
}*/
