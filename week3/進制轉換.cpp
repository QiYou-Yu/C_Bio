#include <stdio.h>
void ans2(float);
void ans8(float);
int main()
{
    float num = 0;
    printf("叫块计(秈):");
    scanf("%f", &num);
    ans2(num);
    printf("\n");
    ans8(num);
}
void ans2(float num)
{
    int z = (float)num;	//俱计い俱计
    float f = num - z;	//计-俱计=计 
    int i = 0, r[12];	//r[i]琌俱计%2緇计 
    
    while (z > 0) 	//计/2=0ゎ 
    {
        r[i] = z % 2;	
        z /= 2;
        i++;
    }
    i--;	//穦Ω┮搭1 
    printf("秈锣秈:");
    for (;i >= 0;i--)	//眖程ㄓ┮iぃ砞﹚ 
    {
        printf("%d", r[i]);
    }
    if(f>0)					//狦Τ计杠 倒计翴 
		{
    	 printf(".");
		}
		
    float w=0;	
    while (f > 0)
    {
        w = f * 2;	//р计2w 
        int x = (float)w;	//x琌w俱计碞琌璶计 
        f = w - x;
        printf("%d", x);
    }
    
}

void ans8(float num)			//秈暗猭琌р计㎝緇计эΘ8 
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
	printf("秈锣秈:");
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

	

