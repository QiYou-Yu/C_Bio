#include <stdio.h>
int main()
{
	int m,n;
	int A[m][n];
	printf("�п�J�x�}�j�pmxn:");
	scanf("%d,%d",&m,&n);
	printf("�п�J�x�}�j���e:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d  ",A[i][j]);
		}
		printf("\n");
	}

}
