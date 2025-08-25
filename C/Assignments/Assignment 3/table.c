//Print table for given number.

#include <stdio.h>

void main(){
	int i=1,n;
	
	printf("Enter a number to get table: ");
	scanf("%d",&n);
	
	while(i<=10){
		printf("%d ",n*i);
		i++;
	}
}
