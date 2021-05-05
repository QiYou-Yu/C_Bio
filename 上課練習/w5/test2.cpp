#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{	
	int num[6];
	int yu_num[6]; 
	int temp;
	int money=0;
	int bingo=0;
	srand(time(NULL));
//開獎號碼 ----------------------------
	printf("開獎號碼:");
	for(int i=0;i<=5;i++)
	{
		num[i]=(rand()%49)+1;
		for(int j=0;j<i;j++)
		{
			if(num[j]==num[i])
			{
				num[j]=(rand()%49)+1;
				j=0;
			}
			else continue;	
		}
	} 
	for (int i = 0;i < 6;i++)
	{
		for (int j = i;j < 6;j++)
		{
			if (num[j] > num[i])
			{
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}
	for(int k=0;k<=5;k++)
	printf("%d  ", num[k]);
	printf("\n");
//--------------------------------
	//我的號碼 
	printf("請輸入您的號碼:\n");

	for(int m=0;m<6;m++)
	{
		scanf("%d",&yu_num[m]);
	}
	printf("您的號碼是:");

	for(int m=0;m<6;m++)
	{
		printf("%d ",yu_num[m]);
	}
	//---------------------------
		for(int j=0;j<6;j++)
		{
			for(int k=0;k<6;k++)
			{
				if(yu_num[k]==num[j])
				{
					bingo++;
				}
			}
		}
		if(bingo==3)
		{
			money=400;
		}
		else if(bingo==4)
		{
			money=2000;
		}
		
		else if(bingo==5)
		{
			money=10000;
		}
		
		else if(bingo==6)
		{
			money=200000;
		}
		
		
		
	printf("\n");
	printf("恭喜您中%d個號碼，得到獎金%d元",bingo,money);
	

		
	
	

}
