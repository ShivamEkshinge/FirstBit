//Print table for given number.

#include <stdio.h>

void main(){
	int i,n;
	
	printf("Enter a number to get table: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printf("%d ",n*i);
	}
}
