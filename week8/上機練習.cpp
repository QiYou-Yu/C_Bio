#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc,char**argv)
{
	long long int n,m,power;
	int s;
	while(true)
	{
		s=0;
		power=1;
		cout<<"請輸入二整數n,m,本程式將計算n^m";
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			power*=n; 
		}
		cout<<"值為:"<<power<<endl;
		while(power>=1)
		{
			power=power/10;
			s++;
		}
		cout<<"共"<<s<<"個位數"<<endl;
	}
	return 0;
		 
}
