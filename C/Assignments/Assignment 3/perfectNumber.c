//Check the given number is Perfect number or not.

#include <stdio.h>

void main(){
	int n,i=1,sum=0;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	while(i<=n/2){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	
	if(n==sum)
	printf("%d is a perfect number.",n);
	
	else 
	printf("%d is not a perfect number.",n);
}
