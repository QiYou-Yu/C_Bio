#include <stdio.h>
void ans2(int);
void ans8(int);
int main()
{
	int num = 0;
	printf("�п�J�Ʀr(�Q�i��):");
	scanf("%d", &num);
	ans2(num);
	printf("\n");
	ans8(num);
}
void ans2(int num)
{
	int i = 0, r[12];
	while (num > 0) {
		r[i] = num % 2;
		num /= 2;
		i++;
	}
	i--;
	printf("�Q�i����G�i�쬰:");
	for (;i >= 0;i--)
	{
		printf("%d", r[i]);
	}
}
void ans8(int num)
{
	int r[12], i=0;
	while (num > 0) {
		r[i] = num % 8;
		num /= 8;
		i++;
	}
	i--;
	printf("�Q�i����K�i�쬰:");
	for (;i >= 0;i--)
	{
		printf("%d", r[i]);
	}
}


	
//	int num = 0, r[10] = { 0 };
//	printf("�п�J�Ʀr(�Q�i��):");
//	scanf("%d", &num);
//	for (int i = 1; i <= 10; i++) {
//		r[i] = num % 2;
//		num /= 2;
//	}
//	for (int j = 5;j <= 1;j--)
//	{
//		printf("%d", r[j]);
//	}


//	int i;
//	int n;
//	for(i=1;i<=9;i++)
//	{
//		for(n=1;n<=9;n++)
//		{
//			printf("%d*%d=%d\t",i,n,n*i);
//		}
//		printf("\n");
//	}
//	return 0;

//	int a[i]={0,1,1,2,3,5,8,13,21,34,55};
//	for(i=0;i<=1,i++)
//	{
//		printf("F_{%d}=%d",i,a[i]);
//	}	
//		for(i=2;i<=11;i++)
//		{
//			printf("F{%d}=F_{%d-1}+F_{%d-2}",i,i,i)
//		}
//
//	while(1){
//	
//	float n,a;
//	int sum=1;
//	printf("Please input a number:");
//	scanf("%f",&n);
//	a=n-(int)n;
//	if(a!=0)
//	{
//			printf("Error");
//			continue;
//	}
//		for(int i=1;i<=n;i++)
//		{
//			sum=sum*i;
//		}
//		printf("%d!=%d",n,sum);
//		printf("\n");
//}
//
//}
