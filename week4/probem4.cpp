#include<stdio.h>
#include<stdlib.h>
void reverse (char str[50]);
int main ()
{
	char str[50];
	printf("�п�J�r��:");
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
	printf("�����:");
	for(int j=i-1;j>=0;j--)
	{
		printf("%c",str[j]);
	}
}

