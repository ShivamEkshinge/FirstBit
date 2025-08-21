//Convert the time entered in hh,min and sec into total seconds

#include <stdio.h>

void main(){
	int hh,min,sec,time;
	printf("Enter hours: ");
	scanf("%d",&hh);
	
	printf("Enter minutes: ");
	scanf("%d",&min);
	
	printf("Enter sec: ");
	scanf("%d",&sec);
	
	time=hh*60*60+min*60+sec;
	
	printf("Time in seconds is %d",time);
}
