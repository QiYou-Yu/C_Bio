#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc,char**argv)
{
	int *p;             //�ŧi�@�Ӿ�ƪ�����p
	int num = 0;
	float avg=0,total=0;

	cout<<"N=";
	cin>>num;			//��J�}�C�j�pnum
	p = new int[num];   // �t�m�O���鵹p�A��p�����@�Ӿ�ư}�C

	for (int i = 0;i <num;i++)
	{
		cout<<"��"<<i+1<<"�ӼƦr��:";
		cin>>*(p+i);
		total += *(p+i);
		cout<<endl;
	}
	delete [] p;		// ����O����
	avg = total / num;
	cout<<"�`��="<<total<<endl;
	cout<<"����=" <<avg<< setprecision(2); 
}
