#include <stdio.h>
int main()
{
	int num[] = { 5,3,8,2,1,4 };
	int temp;
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
	
}

