//�^�a�@�~3:�ϥλ��j�覡��@10�i����2�i��{��
#include <stdio.h>
void decimalTobinary(int);

void decimalTobinary(int num)
 {
	static int i = 0;	//�ϥ�static,�R�A�ϰ���ܼƨϱoi�i�H�֥[
	int remainder = 0;	//�l�� 
	if (num != 0) 		//����ƭ�/2=0���� 
	{
		remainder = num % 2;
		num /= 2;
		decimalTobinary(num);
		printf("%d",remainder);	
	}
}
int main() {
	int num = 0;
	printf("10�i����2�i��\n");
	printf("�п�J�ƭ�:");
	scanf("%d", &num);
	decimalTobinary(num); 
}


