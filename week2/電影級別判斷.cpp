#include <stdio.h>
int main(){
	
  	float age;//定義age年齡為float 
  	printf("請輸入年齡(歲):");
  	scanf("%f",&age);
  	if(age<=5 && age>0 && age-int(age)==0)  //當輸入年齡a<=5且a>0且以浮點數a-整數a為0時 
  	{
  		printf("普通級");
	}
	else if(age<=11 && age>=6 && age-int(age)==0)  //當輸入年齡a<=11且a>=6且以浮點數a-整數a為0時
  	{
  		printf("保護級");
	}
	else if(age<=17 && age>=12 && age-int(age)==0) //當輸入年齡a<=17且a>=12且以浮點數a-整數a為0時 
  	{
  		printf("輔導級");
	}
	else if(age>=18 && age-int(age)==0) //當輸入年齡a>=18且以浮點數a-整數a為0時 
  	{
  		printf("限制級");
	}
	else //非以上情形，顯示錯誤，藉此排除特殊符號 
	{
		printf("ERROR");
	}
}
	
	
	
	
	
	
  	/*
  	int A,B;
  	printf("請輸入兩個數字");
  	scanf("%d,%d",&A,&B);
  	if(A>B)
  	{
  		A%B
	}

  	/*switch (age){

  	case 0:case 1:case 2:case 3:case 4:case 5:
  		printf("普通級");
		  break; 
  	case 6:case 7:case 8:case 9:case 10:case 11:
  		printf("保護級");
		  break;
	case 12:case 13:case 14:case 15:case 16:case 17:
  		printf("輔導級");
		  break;
		  
	case 18:
  		printf("限制級");
		  break;
	default:
		printf("Error");
}
}*/
