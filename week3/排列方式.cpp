#include<stdio.h>
int main()
{
	int i,j,k,count = 0;
	int a[3]={0};
	printf("Please input three number:");
	scanf("%d,%d,%d",&a[0],&a[1],&a[2]);
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				if(i !=k && i!=j && j!=k)
				{
					printf("%d%d%d\n",a[i],a[j],a[k]);
					count++;
				}
			}
		}
	}
	printf("\n");
	printf("總共有%d種排列方式\n",count);
} 
