#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	char n;
	int num[9];
	int a = 0, b = 0;
	printf("�п�J�^��r��(A-Y):");
	scanf("%c", &n);

	if (n <= 72)
	{
		printf("%d", n - 55);
		a = (n - 55) / 10;
		b = (n - 55) % 10;
	}
	else if (n == 73)
	{
		printf("%d", 34);
		a = 3;
		b = 4;
	}

	else if (n > 72 && n <= 78)
	{
		printf("%d", n - 56);
		a = (n - 56) / 10;
		b = (n - 56) % 10;
	}

	else if (n == 79)
	{
		printf("%d", 35);
		a = 3;
		b = 5;
	}

	else if (n > 79 && n <= 86)
	{
		printf("%d", n - 57);
		a = (n - 57) / 10;
		b = (n - 57) % 10;
	}
	else if (n > 87 && n <= 89)
	{
		printf("%d", n - 58);
		a = (n - 58) / 10;
		b = (n - 58) % 10;
	}
	printf("\n");
	printf("�п�J��9�X:\n");
	for (int i = 0;i < 9;i++)
	{
		scanf("%d", &num[i]);
	}
	printf("���E�X:");
	for (int i = 0;i < 9;i++)
	{
		printf("%d", num[i]);
	}
	printf("\n");
	int total = a * 1 + b * 9 + num[0] * 8 + num[1] * 7 + num[2] * 6 + num[3] * 5 + num[4] * 4 + num[5] * 4 + num[6] * 3 + num[7] * 2 + num[8] *1;
	int check = 10 - (total % 10);
	if (check == num[8])
	{
		printf("%c", n);
		for (int i = 0;i < 9;i++)
		{
			printf("%d", num[i]);
		}
		printf("���Ĩ����Ҽ�");
	}
	else
	{
		printf("�L�Ĩ����Ҹ��X");
	}
}


//	printf("�п�J�Ʀr:");
//	scanf("%s",&str2);
//	
//	strncpy(str3,str2,8);
//	printf("%s",str2);
//	
//	strcat(n,str3);
//	printf("strcat(str1,str3)����Astr1=%s",str1);

	//�̫�@��ͭ�*1�a�b�~�M�̭� �`�M/10�l0 
	 //�ĤT�D�e�y�{�� 
	 
	 
	 //4.���for�j��  ��ѦU�Q�ʤd �A���H�ͭ�   �ϥ�%d���²�� 
	 //�r��P�_�}�l�O�_���s   �r�꦳�I���� 
	 //1234567   �X�줸10���C���� 
	 //5.���  ��hfor�j��  ���ܴ�
	 //6.��N��  �p��1���X�� ����*�`����  ���v���j  �L�|���� ���|���V�Y�@�Ʀr 
