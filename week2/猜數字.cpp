#include <stdio.h>
#include <stdlib.h> // �üƬ������ //
#include <time.h>   //�ɶ�������� //
int main(){
  
  srand( time(NULL) );		// ���Ͷü� 			
  int a = (rand()%100)+1;//�]�w�üƺؤl //
  printf("�п�J�Ʀr\n");
  int x = 5, num,upper = 100, lower = 1; //�]x=5�G�i�H�q�����Anum�O�q���Ʀr,
  										 //upper�W��=100�Aupper�U��=1     
	for (int i = 1;i <= x;i++) //�]�j��:�u��qx�� 
    {
        printf("��%d��:", i);
        scanf("%d", &num);

        if (num < a && i<5) //�p�G�q���Ʀr�p�󥿽T���� �B�q�����Ʀbx���H���A����if�j�� 
        {
            printf("�q���o�A�~��q%d~%d\n", num, upper);
            lower = num;
        }
        if (num > a && i<5)	//�p�G�q���Ʀr�j�󥿽T���� �B�q�����Ʀbx���H���A����if�j�� 
        {
            printf("�q���o�A�~��q%d~%d\n", lower, num);
            upper = num;
        }
        if (num == a && i<=5) //�p�G�q���Ʀr���󥿽T���� �B�q�����Ʀbx���H���A����if�j�� 
        {
            printf("�����o");
           	return 0;
        }
	}
		printf("Game Over\n"); //�q�����ƶW�Lx���A�B������A���Game Over 
		printf("���׬O%d",a);
        return 0;
}
