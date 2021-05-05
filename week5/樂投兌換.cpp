#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{	
	int num[6];//存放開獎號碼的陣列 
	int yu_num[6]; //存放您的號碼的陣列 
	int temp;
	int money=0;//得獎金額 
	int bingo=0;//兌中的號碼數 
	srand(time(NULL));
//開獎號碼 ----------------------------
	printf("開獎號碼:");
	for(int i=0;i<=5;i++)
	{
		num[i]=(rand()%49)+1;
		for(int j=0;j<i;j++)
		{
			if(num[j]==num[i])	//當產生重複號碼時 ，重新產生亂數 
			{
				num[j]=(rand()%49)+1;
				j=0;  //j要歸0，下一個數字才能再重頭檢查 
			}
			else continue;	//當產生重複號碼時 ，重新產生亂數，且跳過此次迴圈 
		}
	} 
	for (int i = 0;i < 6;i++)		//大到小排列 
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
	printf("%d  ", num[k]);	//把得獎號碼由大到小排列 
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
//兌獎--------------------

		for(int j=0;j<6;j++)
		{
			for(int k=0;k<6;k++)
			{
				if(yu_num[k]==num[j])//您的號碼一個個和開獎號碼檢查 
				{
					bingo++;		//如果相同，中獎號碼數+1
				}
			}
		}
		if(bingo==3)		//兌中不同號碼數，得到不同金額的獎金 
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
