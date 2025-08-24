//Check the given number is prime or not.
#include <stdio.h>

void main(){
	int n,i,flag=0;
	
	printf("Enter a number to check prime: ");
	scanf("%d",&n);
	
	if(n<0){
		n=n*-1;
	}

	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	
	if(flag==0){
		printf("Number is prime.");
	}
	else
	printf("Number is not prime.");
}
