#include <stdio.h>
#include <stdlib.h>
void reverse(char str[]);
int main(int argc, char *argv[])
{

  char str[20];
  printf("�п�J�@�Ӧr��: "); 
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
	printf("�ഫ�᪺�r��:");
	for(int j=i;j>=0;j--)
	{
		printf("%c",str[j]); 
	}
}
