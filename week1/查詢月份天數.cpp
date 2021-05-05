#include <stdio.h>
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>   /* 時間相關函數 */
int main(){
  /* 設定亂數種子 */
  srand( time(NULL) );

  /* 產生亂數 */
  int a = (rand()%100)+1;

  printf("a = %d\n", a);
  int x = 5, num,upper = 100, lower = 1;    //可以猜五次，num是猜的數字
    
	for (int i = 1;i <= x;i++)       //設迴圈:猜的次數
    {
        printf("第%d次:", i);
        scanf("%d", &num);

        if (num < a && i<5)
        {
            printf("猜錯囉，繼續猜%d~%d", num, upper);
            lower = num;
        }
        if (num > a && i<5)
        {
            printf("猜錯囉，繼續猜%d~%d", lower, num);
            upper = num;
        }
        if (num == a && i<5)
        {
            printf("答對囉");
           	return 0;
        }
	}
		printf("Game Over"); 
        return 0;
  	
}
