#include <stdio.h>

void main(){
	int n,i,r;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int no=n;
	
	while(n!=0){
		if(n/10==0){
		    r=n%10;
			break;
		}
		n=n/10;
	}
	
	printf("Sum of first and last digit is: %d",r+no%10);
}
