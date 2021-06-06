#include <iostream>
using namespace std;
int main(int argc,char**argv)
{
	while(true)
	{
	int *p;             //宣告一個整數的指標p
	int num = 0;
	int s=0,m=0,total=1;		
	
	cout<<"請輸入底數 m=";			
	cin>>m;
	cout<<"請輸入指數 num=";
	cin>>num;			//輸入陣列大小num
	p = new int[num];   // 配置記憶體給p，使p成為一個整數陣列

	for (int i = 0;i <num;i++)
	{
		*(p+i)=m;		//把記憶體位置內的值都設為m 
		total *= *(p+i);//乘冪運算迴圈 
	}
	delete [] p;		// 釋放記憶體
	cout<<"值="<<total<<endl;

	while(total>=1)
	{
		total =total/10;
		s++;//位數加一 
	}
	cout<<"共"<<s<<"個位數"<<endl<<endl;
	}
	system("pause");
	return 0;
}
