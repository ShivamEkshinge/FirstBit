//Find factorial of given number.

#include <stdio.h>

void main(){
	int n,i=1,fact=1;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	while(i<=n){
		fact*=i;
		i++;
	}
	
	printf("Factorial is %d",fact);
}
