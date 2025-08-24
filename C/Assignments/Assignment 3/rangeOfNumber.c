//Sum of numbers in given range.

#include <stdio.h>

void main(){
	int s,e,sum;
	
	printf("Enter starting number: ");
	scanf("%d",&s);
	
	printf("Enter the ending number: ");
	scanf("%d",&e);
	
	for(s;s<=e;s++){
		sum+=s;
	}
	
	printf("Sum= %d",sum);
}
