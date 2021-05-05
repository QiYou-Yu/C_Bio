#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	float num=0;
	int dice=0;
	float a=0,b=0,c=0,d=0,e=0,f=0;
	float a1,b1,c1,d1,e1,f1;
	printf("使用一個骰子，隨機擲出N次計算1~6點之出現次數及機率:\n");
	printf(" N = ");
	scanf("%f",&num);
	printf("\n");
	printf(" 結果:");	

	for(int i=1;i<=num;i++)		
	{
		dice=(rand() % 6) +1;		//亂數擲骰子 亂數產生1~6 
		printf("dice=%2d   ");		//將亂數產生的骰子結果顯示出來 
		if(dice==1)					//進入判斷，如果骰子點數等於1,1的計數器a+1，其他點數一樣作法 
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
	a1=a/num;	//機率為出現次數除以總次數 
	b1=b/num;
	c1=c/num;
	d1=d/num;
	e1=e/num;
	f1=f/num;
	printf("  1出現%.0f次 機率為%f\n",a,a1);
	printf("  2出現%.0f次 機率為%f\n",b,b1);
	printf("  3出現%.0f次 機率為%f\n",c,c1);
	printf("  4出現%.0f次 機率為%f\n",d,d1);
	printf("  5出現%.0f次 機率為%f\n",e,e1);
	printf("  6出現%.0f次 機率為%f",f,f1);
} 
