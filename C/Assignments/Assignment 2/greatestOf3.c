//Greatest of three number using nested if-else
#include <stdio.h>

void main(){
	int a,b,c;
	print("Enter a number: ");
	scanf("%d",&a);
	print("Enter a number: ");
	scanf("%d",&b);
	print("Enter a number: ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("%d is greatest",a);
		}
		
		else
		printf("%d is greatest",c);
	}
	else if(b>c){
		printf("%d is greatest",b);
	}
	else
	printf("%d is greatest",c);
}
