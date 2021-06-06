//回家作業:使用遞迴方式求二項式係數
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
	printf("求二項式係數\n");
	printf("請輸入n及k值:");
	scanf("%d %d", &n, &k);
	result = BinomialCoefficient(n, k);
	printf("(%d,%d)=%d\n", n, k, result);
	system("pause");
}
