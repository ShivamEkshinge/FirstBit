//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.

#include <stdio.h>

void main(){
	int s=5000;
	float da,ta,hra,total;
	
	if(s<=5000){
		da=s*.1;
		ta=s*.2;
		hra=s*.25;
	}
	
	else{
		da=s*.15;
		ta=s*.25;
		hra=s*.3;
	}
	
	printf("da=%.2lf ta=%.2f hra=%.2f\n",da,ta,hra);
	printf("Total=%.2lf",total=da+ta+hra+s);
}
