#include <iostream>
using namespace std;
int main(int argc,char**argv)
{
	while(true)
	{
	int *p;             //�ŧi�@�Ӿ�ƪ�����p
	int num = 0;
	int s=0,m=0,total=1;		
	
	cout<<"�п�J���� m=";			
	cin>>m;
	cout<<"�п�J���� num=";
	cin>>num;			//��J�}�C�j�pnum
	p = new int[num];   // �t�m�O���鵹p�A��p�����@�Ӿ�ư}�C

	for (int i = 0;i <num;i++)
	{
		*(p+i)=m;		//��O�����m�����ȳ��]��m 
		total *= *(p+i);//�����B��j�� 
	}
	delete [] p;		// ����O����
	cout<<"��="<<total<<endl;

	while(total>=1)
	{
		total =total/10;
		s++;//��ƥ[�@ 
	}
	cout<<"�@"<<s<<"�Ӧ��"<<endl<<endl;
	}
	system("pause");
	return 0;
}
