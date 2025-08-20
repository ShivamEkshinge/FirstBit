#include <stdio.h>

void main(){
	//Write a C program to swap two numbers using a temporary third variable.
	
	int a=5,b=10,c;
	printf("a=%d, b=%d",a,b);
	
	a=b,b=c;
	printf("\nAfter swap\na=%d, b=%d",a,b);
}
