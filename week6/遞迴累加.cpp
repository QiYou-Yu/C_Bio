#include<stdio.h>
#define f(l) l*l*l
int main(){
	int l;
	printf("�п�J���������:");
	scanf("%d",&l);
	printf("�������n��:%d",f(l));
}
/*
#include <stdio.h>
int sum(int);
int main(){
	int num;
	printf("�D1+2+3+...+n\n");
	printf("�п�Jn:");
	scanf("%d",&num);
	sum(num);
	printf("�`�M=%d",sum(num));
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
