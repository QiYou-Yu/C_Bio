#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	char n;
	int num[9];
	int a = 0, b = 0;
	printf("請輸入英文字母(A-Y):");
	scanf("%c", &n);

	if (n <= 72)
	{
		printf("%d", n - 55);
		a = (n - 55) / 10;
		b = (n - 55) % 10;
	}
	else if (n == 73)
	{
		printf("%d", 34);
		a = 3;
		b = 4;
	}

	else if (n > 72 && n <= 78)
	{
		printf("%d", n - 56);
		a = (n - 56) / 10;
		b = (n - 56) % 10;
	}

	else if (n == 79)
	{
		printf("%d", 35);
		a = 3;
		b = 5;
	}

	else if (n > 79 && n <= 86)
	{
		printf("%d", n - 57);
		a = (n - 57) / 10;
		b = (n - 57) % 10;
	}
	else if (n > 87 && n <= 89)
	{
		printf("%d", n - 58);
		a = (n - 58) / 10;
		b = (n - 58) % 10;
	}
	printf("\n");
	printf("請輸入末9碼:\n");
	for (int i = 0;i < 9;i++)
	{
		scanf("%d", &num[i]);
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
		printf("有效身分證數");
	}
	else
	{
		printf("無效身分證號碼");
	}
}


//	printf("請輸入數字:");
//	scanf("%s",&str2);
//	
//	strncpy(str3,str2,8);
//	printf("%s",str2);
//	
//	strcat(n,str3);
//	printf("strcat(str1,str3)之後，str1=%s",str1);

	//最後一位銓重*1家在腫和裡面 總和/10餘0 
	 //第三題畫流程圖 
	 
	 
	 //4.兩個for迴圈  拆解各十百千 再乘以銓重   使用%d比較簡單 
	 //字串判斷開始是否為零   字串有點難度 
	 //1234567   幾位元10的七次方 
	 //5.對稱  兩層for迴圈  做變換
	 //6.投N次  計算1有幾次 次數*總次數  機率夠大  他會平均 不會偏向某一數字 
