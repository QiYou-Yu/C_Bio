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
//�}�����X ----------------------------
	printf("�}�����X:");
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
	//�ڪ����X 
	printf("�п�J�z�����X:\n");

	for(int m=0;m<6;m++)
	{
		scanf("%d",&yu_num[m]);
	}
	printf("�z�����X�O:");

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
	printf("���߱z��%d�Ӹ��X�A�o�����%d��",bingo,money);
	

		
	
	

}
