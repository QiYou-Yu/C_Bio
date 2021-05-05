// week3.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
// 
// 
// 


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	char n;
	int num[9];
	int a = 0, b = 0;
	printf("請輸入英文字母(A-Y):");
	scanf_s("%c", &n);

	if (n <= 72)
	{
		printf("%d", n - 55);
		a = (n - 55) / 10;
		b = (n - 55) % 10;
	}
	if (n == 73)
	{
		printf("%d", 34);
		a = 3;
		b = 4;
	}

	if (n > 72 && n <= 78)
	{
		printf("%d", n - 56);
		a = (n - 56) / 10;
		b = (n - 56) % 10;
	}

	if (n == 79)
	{
		printf("%d", 35);
		a = 3;
		b = 5;
	}

	if (n > 79 && n <= 86)
	{
		printf("%d", n - 57);
		a = (n - 57) / 10;
		b = (n - 57) % 10;
	}
	if (n > 87 && n <= 89)
	{
		printf("%d", n - 58);
		a = (n - 58) / 10;
		b = (n - 58) % 10;
	}
	printf("\n");
	printf("請輸入末9碼:\n");
	for (int i = 0;i < 9;i++)
	{
		scanf_s("%d", &num[i]);
	}
	printf("末九碼:");
	for (int i = 0;i < 9;i++)
	{
		printf("%d", num[i]);
	}
	printf("\n");
	int total = a * 1 + b * 9 + num[0] * 8 + num[1] * 7 + num[2] * 6 + num[3] * 5 + num[4] * 4 + num[5] * 4 + num[6] * 3 + num[7] * 2 + num[8] *1;
	int check = 10 - (total % 10);
	if (check == num[8])
	{
		printf("%c", n);
		for (int i = 0;i < 9;i++)
		{
			printf("%d", num[i]);
		}
		printf("為有效身分證數");
	}
	else
	{
		printf("Error");
	}
	system("pause");
}



//#include <stdio.h>
//#include <string.h>
//int main(int argc, char** argv) {
//	char n;
//	int num[9];
//	printf("請輸入英文字母(A-Y):");
//	scanf_s("%c", &n);
//
//	if (n <= 72)
//	{
//		printf("%d", n - 55);
//	}
//	else if (n == 73)
//	{
//		printf("%d", 34);
//	}
//
//	else if (n > 72 && n <= 78)
//	{
//		printf("%d", n - 56);
//	}
//
//	else if (n == 79)
//	{
//		printf("%d", 35);
//	}
//
//	else if (n > 79 && n <= 86)
//	{
//		printf("%d", n - 57);
//	}
//	else if (n > 87 && n <= 89)
//	{
//		printf("%d", n - 58);
//	}
//
//	printf("\n");
//	printf("請輸入末9碼:");
//	printf("\n");
//	for (int i = 0;i < 9;i++)
//	{
//		scanf_s("%d", &num[i]);
//	}
//
//	printf("末九碼:");
//	for (int i = 0;i < 9;i++)
//	{
//		printf("%d", num[i]);
//	}
//}
//








//#include <iostream>
//int is_prime(int n)			//判斷數字是否為質數函式 
//{
//	int i;
//	if (n <= 1)			////輸入數字需大於1
//	{
//		return 0;
//	}
//	for (i = 2;i*i <= n;i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;		//非質數 
//		}
//	}
//	return 1;	//質數 
//}
//int main()
//{
//	int i;
//	float a=0;
//	int count = 0;
//	printf("請輸入一個數字:");
//	scanf_s("%f", &a);
//	int n = (float)a;
//	if (n - a == 0)				//判斷數字為可運算符號 
//	{
//		printf("質數有:");
//		for (i = 2;i <= n;i++)	//輸入數字需大於1
//		{
//			if (is_prime(i))
//			{
//				count++;			//函式傳回1，質數數量+1 
//				printf("%2d", i);
//			}
//		}
//		printf("\n %d以內的質數共有%d個", n, count);
//		return 0;
//	}
//	else
//	{
//		printf("Error");
//	}
//}
//
//#include <stdio.h>
//void bin(int);
//void dec1(float);
//void oct(int);
//void dec2(float);
//int main()
//{
//	float a = 0;
//	int num = 0;
//	float dec = 0;
//	printf("請輸入數字(十進位):");
//	scanf_s("%f", &a);
//	dec = a - (int)a;
//	num = a - dec;
//	bin(num);
//	printf(".");
//	dec1(dec);
//	printf("\n");
//	oct(num);
//}
//void bin(int num)
//{
//	int i = 0, r[12];
//	while (num > 0) {
//		r[i] = num % 2;
//		num /= 2;
//		i++;
//	}
//	i--;
//	printf("十進位轉二進位為:");
//	for (;i >= 0;i--)
//	{
//		printf("%d", r[i]);
//	}
//}
//void dec1(float dec)
//{
//	int j = 0, d[12];
//	int b;
//	while (dec > 0) {
//		dec = dec * 2;
//		b = (int)dec;
//		d[j] = b;
//		j++;
//	}
//	for (j=0;j <= 11;j--)
//	{
//		printf("%d", d[j]);
//	}
//}
//void oct(int num)
//{
//	int r[12], i = 0;
//	while (num > 0) {
//		r[i] = num % 8;
//		num /= 8;
//		i++;
//	}
//	i--;
//	printf("十進位轉八進位為:");
//	for (;i >= 0;i--)
//	{
//		printf("%d", r[i]);
//	}
//}

//
//#include <stdio.h>
//void bin(int);
//void oct(int);
//int main()
//{
//	int num = 0;
//	printf("請輸入數字(十進位):");
//	scanf_s("%d", &num);
//	bin(num);
//	printf("\n");
//	oct(num);
//}
//void bin(int num)
//{
//	int i = 0, r[12];
//	while (num > 0) {
//		r[i] = num % 2;
//		num /= 2;
//		i++;
//	}
//	i--;
//	printf("十進位轉二進位為:");
//	for (;i >= 0;i--)
//	{
//		printf("%d", r[i]);
//	}
//}
//void oct(int num)
//{
//	int r[12], i=0;
//	while (num > 0) {
//		r[i] = num % 8;
//		num /= 8;
//		i++;
//	}
//	i--;
//	printf("十進位轉八進位為:");
//	for (;i >= 0;i--)
//	{
//		printf("%d", r[i]);
//	}
//}
//
//
//
//
//
////#include <stdio.h>
////
////int main()
////{
////	int i, j, k, count = 0;
////	int a[3] = { 0 };
//	printf("Please input three number:");
//	scanf_s("%d,%d,%d", &a[0], &a[1], &a[2]);
//	printf("\n");
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			for (k = 0;k < 3;k++)
//			{
//				if (i != k && i != j && j != k)
//				{
//					printf("%d%d%d\n", a[i], a[j], a[k]);
//					count++;
//				}
//			}
//		}
//	}
//	printf("\n");
//	printf("總共有%d個\n", count);
//	return 0;
//}
//


//
//#include <iostream>
//	int is_prime(int n)
//	{
//		int i;
//		if (n <= 1)
//		{
//			return 0;
//		}
//		for (i = 2;i * i <= n;i++)
//		{
//			if (n % i == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//	int main()
//	{
//		int i;
//		float a = 0.0f;
//		int n;
//		n = int(a);
//		int count = 0;
//		float b;
//		b = n - a;
//		printf("請輸入一個數字:");
//		scanf_s("%d", &a);
//		if (b==0)
//		{
//			printf("質數有:");
//			for (i = 2;i <= n;i++)
//			{
//				if (is_prime(i))
//				{
//					count++;
//					printf("%2d", i);
//				}
//			}
//			printf("\n %d以內的質數共有%d個", n, count);
//			return 0;
//		}
//		else
//		{
//			printf("Error");
//		}
//		
//		//如果 n 不是質數，那麼 n 一定有一個小於等於 n 的因數
//	}


		
		

	




	/*
		float n = 0;
		int a = (int)n;
		
		int  b, c = 1, d = 0;
		printf("請輸入十進位的數字：");
		scanf_s("%d", &a);
		float e = a - n;
		while (a != 0)
		{
			b = a % 2;
			a = a / 2;
			d = d + b * c;
			c = c * 10;
		}


		printf("二進位=%d", d);
		printf("%f", e);
	
	printf("\n");
	return 0;
	system("pause");*/








	/*float n = 0;
	int a;
	int ans[10] = { 0 };
	a = (int)n;
	printf("請輸入十進位數字");
	scanf_s("%f", &n);
	for (int i = 0;a > 0;i++)
	{
		ans[i] = a % 2;
		a = a / 2;
	}*/
	/*for (int i = i - 1;i >= 0;i--)
	{
		printf("%d", ans[i]);
	}*/


//int a[10], n, i;
//cout << "Enter the number to convert: ";
//cin >> n;
//for (i = 0; n > 0; i++)
//{
//	a[i] = n % 2;
//	n = n / 2;
//}
//cout << "Binary of the given number= ";
//for (i = i - 1;i >= 0;i--)
//{
//	cout << a[i];
//}
//return 0;
//}

	/*for (int j = count;j <= 0;j--)
	{
		printf("%d", ans[j]);
	}
	return 0;

}

*/










	/*while (1) {

		float n, a;
		int sum = 1;
		printf("Please input a number:");
		scanf_s("%f", &n);
		a = n - (int)n;
		if (a != 0)
		{
			printf("Error");
			continue;
		}
		for (int i = 1;i <= n;i++)
		{
			sum = sum * i;
		}
		printf("%.f!=%d", n, sum);
		printf("\n");
	}

}*/

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
