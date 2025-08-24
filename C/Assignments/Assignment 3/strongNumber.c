//Check the given number is Strong number or not.

#include <stdio.h>

void main(){
	int n,i,r,fact=1,sum=0;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int no=n;
	
	while(n!=0){
		r=n%10;
		for(i=1;i<=r;i++){
			fact*=i;
		}
		sum=sum+fact;
		fact=1;
		n/=10;
	}
	
	if(sum==no){
		printf("%d is a strong number.",no);
	}
	
	else
	printf("%d is not a strong number.",no);
}
