//print last two digits of a number

#include <stdio.h>

void main(){
	int n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(n%100==0){
		printf("Last two digits of %d are 00",n);
	}
	else
		printf("Last two digits of %d are %d",n,n%100);
}
