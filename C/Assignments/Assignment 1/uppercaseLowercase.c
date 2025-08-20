//Write a program to check whether a given character is uppercase or lowercase.

#include <stdio.h>

void main(){
	char c='A';
	
	if(c>=65&&c<=91){
		printf("Given character is uppercase.");
	}
	
	else{
		printf("Given characer is lowercase.");
	}
}
