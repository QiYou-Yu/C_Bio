#include <stdio.h>
int main(){
	
  	float age;//�w�qage�~�֬�float 
  	printf("�п�J�~��(��):");
  	scanf("%f",&age);
  	if(age<=5 && age>0 && age-int(age)==0)  //���J�~��a<=5�Ba>0�B�H�B�I��a-���a��0�� 
  	{
  		printf("���q��");
	}
	else if(age<=11 && age>=6 && age-int(age)==0)  //���J�~��a<=11�Ba>=6�B�H�B�I��a-���a��0��
  	{
  		printf("�O�@��");
	}
	else if(age<=17 && age>=12 && age-int(age)==0) //���J�~��a<=17�Ba>=12�B�H�B�I��a-���a��0�� 
  	{
  		printf("���ɯ�");
	}
	else if(age>=18 && age-int(age)==0) //���J�~��a>=18�B�H�B�I��a-���a��0�� 
  	{
  		printf("�����");
	}
	else //�D�H�W���ΡA��ܿ��~�A�Ǧ��ư��S��Ÿ� 
	{
		printf("ERROR");
	}
}
	
	
	
	
	
	
  	/*
  	int A,B;
  	printf("�п�J��ӼƦr");
  	scanf("%d,%d",&A,&B);
  	if(A>B)
  	{
  		A%B
	}

  	/*switch (age){

  	case 0:case 1:case 2:case 3:case 4:case 5:
  		printf("���q��");
		  break; 
  	case 6:case 7:case 8:case 9:case 10:case 11:
  		printf("�O�@��");
		  break;
	case 12:case 13:case 14:case 15:case 16:case 17:
  		printf("���ɯ�");
		  break;
		  
	case 18:
  		printf("�����");
		  break;
	default:
		printf("Error");
}
}*/
