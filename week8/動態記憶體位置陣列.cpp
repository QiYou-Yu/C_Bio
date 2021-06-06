#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc,char**argv)
{
	int *p;             //宣告一個整數的指標p
	int num = 0;
	float avg=0,total=0;

	cout<<"N=";
	cin>>num;			//輸入陣列大小num
	p = new int[num];   // 配置記憶體給p，使p成為一個整數陣列

	for (int i = 0;i <num;i++)
	{
		cout<<"第"<<i+1<<"個數字為:";
		cin>>*(p+i);
		total += *(p+i);
		cout<<endl;
	}
	delete [] p;		// 釋放記憶體
	avg = total / num;
	cout<<"總數="<<total<<endl;
	cout<<"平均=" <<avg<< setprecision(2); 
}
