#include <stdio.h>
int main()
{
	int size=0;
	char ch;
	printf("請輸入N:");
	scanf("%d",&size);
	for(int i=0;i<=size;i++)	// 印出第i列
	{
			for(int j=1;j<=size-i;j++)	// 第j列 有size-i個空格 
			{
				printf(" ");
			} 
			ch='A';
			for(int k=1;k<=i;k++)
			{
			    printf("%c",ch++);
			}
			ch=ch-2;
			for(int l=1;l<i;l++)
			{
				printf("%c",ch--);
			}
		printf("\n");		 
	}
}

















