#include <stdio.h>
int main(int argc, char** argv){
	int h,m,angle;
	printf("請輸入時針(1-12):");	//時針一小時走30度，每分鐘走0.5度 
	scanf("%d",&h);
	printf("請輸入分針(00-59):");  //分針一小時走360度，每分鐘走6度 
	scanf("%d",&m);
	angle=30*h-5.5*m;		       //(30*h+0.5*m)-(6m)
	if(angle<=180)
	{
		printf("時針和分針夾角:%d 度",angle);
	}
	if(angle>180)
	{
		printf("時針和分針夾角:%d 度",360-angle);
	}
	
}
	
	
	
	
	

