#include <iostream>
int is_prime(int n)			//�P�_�Ʀr�O�_����ƨ禡 
{
	int i;
	if (n <= 1)			////��J�Ʀr�ݤj��1
	{
		return 0;
	}
	for (i = 2;i * i <= n;i++)
	{
		if (n % i == 0)
		{
			return 0;		//�D��� 
		}
	}
	return 1;	//��� 
}
int main()
{
	int i;
	float a=0;
	int count = 0;
	printf("�п�J�@�ӼƦr:");
	scanf("%f", &a);
	int n = (float)a;
	if (n - a == 0)				//�P�_�Ʀr���i�B��Ÿ� 
	{
		printf("��Ʀ�:");
		for (i = 2;i <= n;i++)	//��J�Ʀr�ݤj��1
		{
			if (is_prime(i))	//�i�J�P�_��ƨ禡 
			{
				count++;			//�禡�Ǧ^1�A��Ƽƶq+1 
				printf("%2d", i);
			}
		}
		printf("\n %d�H������Ʀ@��%d��", n, count);
		return 0;
	}
	else
	{
		printf("Error");
	}
}
