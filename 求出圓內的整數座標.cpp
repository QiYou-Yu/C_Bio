#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
int main()
{
	float r=0;
	float r1=0,r2=0,r3=0;;
	printf("�п�J�b�|:");
	scanf("%f",&r);
	printf("�b�b�|%.3f���ꭱ�n�̡A�]�t����Ʈy�Ц�:\n",r);
	for(int i=-r;i<=r;i++)//x�y�СA���q�tx�}�l��_ 
	{
		for(int j=-r;j<=r;j++)//y�y�СA���q�ty�}�l��_ 
		{
			r1=pow(i,2);//��x�y�Ъ����� 
			r2=pow(j,2);//��y�y�Ъ����� 
			r3=sqrt(r1+r2);//�ۥ[�}�ڸ� 
			if(r3<=r)	//�p�G�p��r�A���y�дN�O�b�ꭱ�n�̭� 
			{
				printf("(%2d,%2d)\n",i,j);	//��y��console 
			}
		}
	}
}
