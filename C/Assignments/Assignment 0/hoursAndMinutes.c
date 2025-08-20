#include <stdio.h>

void main(){
	//Write a C program to convert given minutes into hours and remaining minutes.
	
	int n=440;
	int h,m;
	
	h=n/60;
	m=n%60;
	
	printf("Hours: %d, Minutes: %d",h,m);
}
