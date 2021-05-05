#include <stdio.h>
#include <stdlib.h> // 亂數相關函數 //
#include <time.h>   //時間相關函數 //
int main(){
  
  srand( time(NULL) );		// 產生亂數 			
  int a = (rand()%100)+1;//設定亂數種子 //
  printf("請輸入數字\n");
  int x = 5, num,upper = 100, lower = 1; //設x=5：可以猜五次，num是猜的數字,
  										 //upper上限=100，upper下限=1     
	for (int i = 1;i <= x;i++) //設迴圈:只能猜x次 
    {
        printf("第%d次:", i);
        scanf("%d", &num);

        if (num < a && i<5) //如果猜的數字小於正確答案 且猜的次數在x次以內，執行if迴圈 
        {
            printf("猜錯囉，繼續猜%d~%d\n", num, upper);
            lower = num;
        }
        if (num > a && i<5)	//如果猜的數字大於正確答案 且猜的次數在x次以內，執行if迴圈 
        {
            printf("猜錯囉，繼續猜%d~%d\n", lower, num);
            upper = num;
        }
        if (num == a && i<=5) //如果猜的數字等於正確答案 且猜的次數在x次以內，執行if迴圈 
        {
            printf("答對囉");
           	return 0;
        }
	}
		printf("Game Over\n"); //猜的次數超過x次，且未答對，顯示Game Over 
		printf("答案是%d",a);
        return 0;
}
