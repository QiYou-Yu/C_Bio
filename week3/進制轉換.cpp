#include <stdio.h>
void ans2(float);
void ans8(float);
int main()
{
    float num = 0;
    printf("�п�J�Ʀr(�Q�i��):");
    scanf("%f", &num);
    ans2(num);
    printf("\n");
    ans8(num);
}
void ans2(float num)
{
    int z = (float)num;	//����ӼƭȤ������
    float f = num - z;	//�ƭ�-���=�p�� 
    int i = 0, r[12];	//r[i]�O����%2���l�� 
    
    while (z > 0) 	//����ƭ�/2=0���� 
    {
        r[i] = z % 2;	
        z /= 2;
        i++;
    }
    i--;	//�|�h�[�@���A�ҥH��1 
    printf("�Q�i����G�i�쬰:");
    for (;i >= 0;i--)	//�q�̫���^�ӡA�ҥHi����Ȥ��]�w 
    {
        printf("%d", r[i]);
    }
    if(f>0)					//�p�G���p�ƪ��� ���L�@�Ӥp���I 
		{
    	 printf(".");
		}
		
    float w=0;	
    while (f > 0)
    {
        w = f * 2;	//��p�ƭ��H2���ȩ�Jw 
        int x = (float)w;	//x�Ow����ƭȡA�]�N�O�n�����Ʀr 
        f = w - x;
        printf("%d", x);
    }
    
}

void ans8(float num)			//�P�G�i�찵�k�A�u�O�⭼�ƩM���l�Ƨ令8 
{
	int y=(float)num;
	float k=num-y;
	int c=0;

	int i=0,r[12];
	while (y > 0) 
	{
		r[i] = y % 8;
		y /= 8;
		i++;
	}
	i--;
	printf("�Q�i����K�i�쬰:");
	for (;i >= 0;i--)
	{
		printf("%d", r[i]);
	}
	
	if(k>0)
	{
      printf(".");
      c= k * 8;
      printf("%d", c);
    }
	
}

	

