//�^�a�@�~:�ϥλ��j�覡�D����(Factorial)
#include <stdio.h>
int fac(int);
int fac(int num)
{
	if(num>0){
		return (num*fac(num-1));
	}
	else{
		return 1;
	}
}
int main(){
	int num=0;
	printf("�Dn���h\n");
	printf("�п�Jn:");
	scanf("%d",&num);
	printf("%d!=%d",num,fac(num));
}

