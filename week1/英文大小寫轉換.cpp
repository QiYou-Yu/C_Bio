#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) 
{
	char a; 
	printf("�п�J�^��r�� : ");
	scanf("%c",&a);
	if (a>64)					//�bASCII�X�̭����^��r�����j��64 
	{ 
		if (a>91)    //�P�_�j�p�g�A�p�G��J�r��a��ASCII�X>91�N�P�w���p�g �A����if�j�餺�����e 
			{ 
				char b= a-32; 	//�����^��ASCII�X���j�p�g 
				printf("�ഫ���j�g��: %c",b);
 			}
	 
 			else if(a<91) 				////�P�_�j�p�g�A�p�G��J�r��a��ASCII�X<91�N�P�w���j�g �A����if�j�餺�����e 
				{
					char b= a+32;
					printf("�ഫ���p�g��: %c",b);
				} 
	}		
					else			//�p�G��J�r����ASCII�X���O>64�A�L�X���O�^��r�� 
						{
							printf("��J����r���O�^��r��!"); 
						}
}


