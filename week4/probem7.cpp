#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	float num=0;
	int dice=0;
	float a=0,b=0,c=0,d=0,e=0,f=0;
	float a1,b1,c1,d1,e1,f1;
	printf("�ϥΤ@�ӻ�l�A�H���Y�XN���p��1~6�I���X�{���Ƥξ��v:\n");
	printf(" N = ");
	scanf("%f",&num);
	printf("\n");
	printf(" ���G:");	

	for(int i=1;i<=num;i++)		
	{
		dice=(rand() % 6) +1;		//�ü��Y��l �üƲ���1~6 
		printf("dice=%2d   ");		//�N�üƲ��ͪ���l���G��ܥX�� 
		if(dice==1)					//�i�J�P�_�A�p�G��l�I�Ƶ���1,1���p�ƾ�a+1�A��L�I�Ƥ@�˧@�k 
		{
			a++;
		}
		else if(dice==2)
		{
			b++;
		}
		else if(dice==3)
		{
			c++;
		}
		else if(dice==4)
		{
			d++;
		}
		else if(dice==5)
		{
			e++;
		}
		else if(dice==6)
		{
			f++;
		}
	}
	printf("\n");
	a1=a/num;	//���v���X�{���ư��H�`���� 
	b1=b/num;
	c1=c/num;
	d1=d/num;
	e1=e/num;
	f1=f/num;
	printf("  1�X�{%.0f�� ���v��%f\n",a,a1);
	printf("  2�X�{%.0f�� ���v��%f\n",b,b1);
	printf("  3�X�{%.0f�� ���v��%f\n",c,c1);
	printf("  4�X�{%.0f�� ���v��%f\n",d,d1);
	printf("  5�X�{%.0f�� ���v��%f\n",e,e1);
	printf("  6�X�{%.0f�� ���v��%f",f,f1);
} 
