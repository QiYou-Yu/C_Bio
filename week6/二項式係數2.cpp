//�^�a�@�~:�ϥλ��j�覡�D�G�����Y��
#include <stdio.h>
#include <stdlib.h>
int BinomialCoefficient(int, int);

int BinomialCoefficient(int n, int k)
{
	if (k == 0 || n == k)
		return 1;
	else
		return BinomialCoefficient(n - 1, k) + BinomialCoefficient(n - 1, k - 1);
}
int main(void)
{
	int n = 0, k = 0, result = 0;
	printf("�D�G�����Y��\n");
	printf("�п�Jn��k��:");
	scanf("%d %d", &n, &k);
	result = BinomialCoefficient(n, k);
	printf("(%d,%d)=%d\n", n, k, result);
	system("pause");
}
