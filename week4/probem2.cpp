#include <stdio.h>
int main(int argc, char** argv){
	int n,total=0; 
	printf("請輸入N:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		total+=i*i;
	}
	printf("%d x %d 的方格中含有%d個正方形",n,n,total);
}
