#include <stdio.h>
int main()
{
	int size=0;
	char ch;
	printf("�п�JN:");
	scanf("%d",&size);
	for(int i=0;i<=size;i++)	// �L�X��i�C
	{
			for(int j=1;j<=size-i;j++)	// ��j�C ��size-i�ӪŮ� 
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

















