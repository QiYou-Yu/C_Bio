#include <stdio.h>
int main(int argc, char** argv){
	int h,m,angle;
	printf("�п�J�ɰw(1-12):");	//�ɰw�@�p�ɨ�30�סA�C������0.5�� 
	scanf("%d",&h);
	printf("�п�J���w(00-59):");  //���w�@�p�ɨ�360�סA�C������6�� 
	scanf("%d",&m);
	angle=30*h-5.5*m;		       //(30*h+0.5*m)-(6m)
	if(angle<=180)
	{
		printf("�ɰw�M���w����:%d ��",angle);
	}
	if(angle>180)
	{
		printf("�ɰw�M���w����:%d ��",360-angle);
	}
	
}
	
	
	
	
	

