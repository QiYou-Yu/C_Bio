#include <stdio.h>
int main(int argc, char** argv){
	int n,total=0; 
	printf("�п�JN:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		total+=i*i;
	}
	printf("%d x %d ����椤�t��%d�ӥ����",n,n,total);
}
