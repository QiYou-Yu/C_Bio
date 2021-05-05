#include <stdio.h>
#include <stdlib.h>
void reverse(char str[]);
int main(int argc, char *argv[])
{

  char str[20];
  printf("請輸入一個字串: "); 
  gets(str);
  reverse(str);
}
void reverse(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("轉換後的字串:");
	for(int j=i;j>=0;j--)
	{
		printf("%c",str[j]); 
	}
}
