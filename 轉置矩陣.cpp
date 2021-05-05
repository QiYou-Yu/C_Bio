#include <stdio.h>
int main()
{
	int m,n;
	int A[100][100];	//[row][column]
	printf("請輸入矩陣大小mxn:");
	scanf("%d,%d",&m,&n);
	printf("請輸入矩陣大內容:\n");
	
	for(int i=0;i<m;i++)	//[row]
	{
		for(int j=0;j<n;j++)//[column]
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("A矩陣為:\n");
	for(int i=0;i<m;i++)	//[row]
	{
		printf("| ");
		for(int j=0;j<n;j++)//[column]
		{
			printf("%d ",A[i][j]);
		}
		printf("|\n");
	}
	
	
	printf("A的轉置矩陣為:\n");
	for(int i=0;i<n;i++)	//轉置矩陣就是行列大小交換 A(T)[row]=A[column] 
	{												 
	    printf("| ");

		for(int j=0;j<m;j++) //A(T)[column]=A[row]
		{
			printf("%d ",A[j][i]);
		}
		printf("|\n");
	}
}
