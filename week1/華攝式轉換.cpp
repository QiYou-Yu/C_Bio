#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int a; 
	float b; 
	do{						 
	printf("請選擇要轉換的格式(1)C →F。 (2)F →C。 :");
	scanf("%d",&a);  
	if (a == 1) 			//判斷輸入的數字，如果是1，執行攝氏轉華氏 
		{
			printf("請輸入攝氏溫度 : ");
			scanf("%f",&b);
			float F = b*9/5+32;
			printf("華氏溫度=%.2f度\n ",F);   //.2f是取到小數兩位 
		}	

			else					//如果輸入不是1就執行華氏轉攝氏 
				{
					printf("請輸入華氏溫度 : ");
					scanf("%f",&b);
					float C = (b-32)*5/9;
					printf("攝氏溫度=%.2f度\n",C); 
				}
	}	
	while(a != EOF );
} 
