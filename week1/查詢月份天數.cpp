#include <stdio.h>
#include <stdlib.h> /* �üƬ������ */
#include <time.h>   /* �ɶ�������� */
int main(){
  /* �]�w�üƺؤl */
  srand( time(NULL) );

  /* ���Ͷü� */
  int a = (rand()%100)+1;

  printf("a = %d\n", a);
  int x = 5, num,upper = 100, lower = 1;    //�i�H�q�����Anum�O�q���Ʀr
    
	for (int i = 1;i <= x;i++)       //�]�j��:�q������
    {
        printf("��%d��:", i);
        scanf("%d", &num);

        if (num < a && i<5)
        {
            printf("�q���o�A�~��q%d~%d", num, upper);
            lower = num;
        }
        if (num > a && i<5)
        {
            printf("�q���o�A�~��q%d~%d", lower, num);
            upper = num;
        }
        if (num == a && i<5)
        {
            printf("�����o");
           	return 0;
        }
	}
		printf("Game Over"); 
        return 0;
  	
}
