#include<stdio.h>
#include<stdlib.h>
void reverse (char str[50]);
int main ()
{
	char str[50];
	printf("請輸入字串:");
	scanf("%s",&str);
	reverse(str);
}
void reverse(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("反轉後:");
	for(int j=i-1;j>=0;j--)
	{
		printf("%c",str[j]);
	}
}

