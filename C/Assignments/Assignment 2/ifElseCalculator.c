//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.

#include <stdio.h>

void main(){
	int n1,n2;
	char op;
	
	printf("Enter first number: ");
	scanf("%d",&n1);	
	printf("Enter second number: ");
	scanf("%d",&n2);	
	printf("Enter operator(+,-,/,*,%%): ");
	scanf(" %c",&op);
	
	if(op=='+'){
		printf("%d+%d=%d",n1,n2,n1+n2);
	}
	else if(op=='-'){
		printf("%d-%d=%d",n1,n2,n1-n2);
	}
	else if(op=='/'){
		printf("%d/%d=%d",n1,n2,n1/n2);
	}
	else if(op=='*'){
		printf("%d*%d=%d",n1,n2,n1*n2);
	}
	else if(op=='%'){
		printf("%d%%%d=%d",n1,n2,n1%n2);
	}
}
