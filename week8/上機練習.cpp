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
		cout<<"�п�J�G���n,m,���{���N�p��n^m";
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			power*=n; 
		}
		cout<<"�Ȭ�:"<<power<<endl;
		while(power>=1)
		{
			power=power/10;
			s++;
		}
		cout<<"�@"<<s<<"�Ӧ��"<<endl;
	}
	return 0;
		 
}
