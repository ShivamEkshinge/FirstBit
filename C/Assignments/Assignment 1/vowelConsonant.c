//Write a program to check whether a given character is a vowel or consonant.

#include <stdio.h>

void main(){
	char c='a';
	
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
		printf("Given character is vowel");
	}
	
	else{
		printf("Given character is consonant");
	}
}
