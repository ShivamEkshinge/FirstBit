#include <stdio.h>

void main(){
	int n=12;
	int r1,r2,r3;
	int q1,rev;
	
	q1=n/10;
	r1=n%10;
	r2=q1%10;
	r3=q1/10;
	
	rev=r1*100+r2*10+r3;
	
	if(n==rev){
		printf("Number is palindrome");
	}
	
	else{
		printf("Number is not palindrome");
	}
}
