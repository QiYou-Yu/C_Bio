#include <iostream>
int is_prime(int n)			//判斷數字是否為質數函式 
{
	int i;
	if (n <= 1)			////輸入數字需大於1
	{
		return 0;
	}
	for (i = 2;i * i <= n;i++)
	{
		if (n % i == 0)
		{
			return 0;		//非質數 
		}
	}
	return 1;	//質數 
}
int main()
{
	int i;
	float a=0;
	int count = 0;
	printf("請輸入一個數字:");
	scanf("%f", &a);
	int n = (float)a;
	if (n - a == 0)				//判斷數字為可運算符號 
	{
		printf("質數有:");
		for (i = 2;i <= n;i++)	//輸入數字需大於1
		{
			if (is_prime(i))	//進入判斷質數函式 
			{
				count++;			//函式傳回1，質數數量+1 
				printf("%2d", i);
			}
		}
		printf("\n %d以內的質數共有%d個", n, count);
		return 0;
	}
	else
	{
		printf("Error");
	}
}
