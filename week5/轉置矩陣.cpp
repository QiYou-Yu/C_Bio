#include <stdio.h>
int main()
{
	int m,n;
	int A[m][n];
	printf("請輸入矩陣大小mxn:");
	scanf("%d,%d",&m,&n);
	printf("請輸入矩陣大內容:\n");
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
