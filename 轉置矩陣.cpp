#include <stdio.h>
int main()
{
	int m,n;
	int A[100][100];	//[row][column]
	printf("�п�J�x�}�j�pmxn:");
	scanf("%d,%d",&m,&n);
	printf("�п�J�x�}�j���e:\n");
	
	for(int i=0;i<m;i++)	//[row]
	{
		for(int j=0;j<n;j++)//[column]
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("A�x�}��:\n");
	for(int i=0;i<m;i++)	//[row]
	{
		printf("| ");
		for(int j=0;j<n;j++)//[column]
		{
			printf("%d ",A[i][j]);
		}
		printf("|\n");
	}
	
	
	printf("A����m�x�}��:\n");
	for(int i=0;i<n;i++)	//��m�x�}�N�O��C�j�p�洫 A(T)[row]=A[column] 
	{												 
	    printf("| ");

		for(int j=0;j<m;j++) //A(T)[column]=A[row]
		{
			printf("%d ",A[j][i]);
		}
		printf("|\n");
	}
}
