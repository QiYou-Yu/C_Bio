#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
int main()
{
	float r=0;
	float r1=0,r2=0,r3=0;;
	printf("請輸入半徑:");
	scanf("%f",&r);
	printf("在半徑%.3f的圓面積裡，包含的整數座標有:\n",r);
	for(int i=-r;i<=r;i++)//x座標，先從負x開始找起 
	{
		for(int j=-r;j<=r;j++)//y座標，先從負y開始找起 
		{
			r1=pow(i,2);//取x座標的平方 
			r2=pow(j,2);//取y座標的平方 
			r3=sqrt(r1+r2);//相加開根號 
			if(r3<=r)	//如果小於r，此座標就是在圓面積裡面 
			{
				printf("(%2d,%2d)\n",i,j);	//把座標console 
			}
		}
	}
}
