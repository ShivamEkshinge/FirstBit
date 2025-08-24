#include <stdio.h>

void main(){
	int n,t,sum=0;
	
	printf("Enter a number: ");
	scanf("%d",&n);					//takes input in n
	
	int no=n;
	
	while(n!=0){
		t=n%10;						//takes last digit from the number
		sum=sum+t*t*t;				//takes sum of the cubes of digits
		n=n/10;						//removes last digit from number to take next last digit in next cycle
	}
	
	if(sum==no){
		printf("Number is armstrong.");
	}
	else
		printf("Number is not armstrong.");
}
