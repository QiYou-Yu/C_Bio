#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) 
{
	char a; 
	printf("請輸入英文字母 : ");
	scanf("%c",&a);
	if (a>64)					//在ASCII碼裡面的英文字母都大於64 
	{ 
		if (a>91)    //判斷大小寫，如果輸入字元a的ASCII碼>91就判定為小寫 ，執行if迴圈內的內容 
			{ 
				char b= a-32; 	//此為英文ASCII碼的大小寫 
				printf("轉換成大寫後: %c",b);
 			}
	 
 			else if(a<91) 				////判斷大小寫，如果輸入字元a的ASCII碼<91就判定為大寫 ，執行if迴圈內的內容 
				{
					char b= a+32;
					printf("轉換成小寫後: %c",b);
				} 
	}		
					else			//如果輸入字元的ASCII碼不是>64，印出不是英文字母 
						{
							printf("輸入的文字不是英文字母!"); 
						}
}


