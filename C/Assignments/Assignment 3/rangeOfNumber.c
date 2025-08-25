//Sum of numbers in given range.

#include <stdio.h>

void main(){
	int s,e,sum;
	
	printf("Enter starting number: ");
	scanf("%d",&s);
	
	printf("Enter the ending number: ");
	scanf("%d",&e);
	
	while(s<=e){
		sum+=s;
		s++;
	}
	
	printf("Sum= %d",sum);
}
