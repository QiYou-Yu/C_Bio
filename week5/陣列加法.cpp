#include <stdio.h>
int main()
{
	int A[3][3];
	int B[3][3];
	for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				scanf("%d",&A[i][j]);
			}
		} 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d  ",A[i][j]);
		}
		printf("\n");
	}
	
	
	for(int l=0;l<3;l++)
		{
			for(int m=0;m<3;m++)
			{
				scanf("%2d",&B[l][m]);
			}
		} 
	for(int l=0;l<3;l++)
	{
		for(int m=0;m<3;m++)
		{
			printf("%d  ",B[l][m]);
		}
		printf("\n");
		
	}
	
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			printf("%d  ",A[a][b]+B[a][b]);
		}
		printf("\n");
	} 
	
}
