#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int a; 
	float b; 
	do{						 
	printf("�п�ܭn�ഫ���榡(1)C ��F�C (2)F ��C�C :");
	scanf("%d",&a);  
	if (a == 1) 			//�P�_��J���Ʀr�A�p�G�O1�A���������ؤ� 
		{
			printf("�п�J���ū� : ");
			scanf("%f",&b);
			float F = b*9/5+32;
			printf("�ؤ�ū�=%.2f��\n ",F);   //.2f�O����p�ƨ�� 
		}	

			else					//�p�G��J���O1�N����ؤ������ 
				{
					printf("�п�J�ؤ�ū� : ");
					scanf("%f",&b);
					float C = (b-32)*5/9;
					printf("���ū�=%.2f��\n",C); 
				}
	}	
	while(a != EOF );
} 
