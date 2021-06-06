//回家作業3:使用遞迴方式實作10進制轉2進制程式
#include <stdio.h>
void decimalTobinary(int);

void decimalTobinary(int num)
 {
	static int i = 0;	//使用static,靜態區域性變數使得i可以累加
	int remainder = 0;	//餘數 
	if (num != 0) 		//取到數值/2=0為止 
	{
		remainder = num % 2;
		num /= 2;
		decimalTobinary(num);
		printf("%d",remainder);	
	}
}
int main() {
	int num = 0;
	printf("10進制轉2進制\n");
	printf("請輸入數值:");
	scanf("%d", &num);
	decimalTobinary(num); 
}


