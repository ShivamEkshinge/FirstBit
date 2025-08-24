#include <stdio.h>

void main(){
	int rev=0, n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int no=n;
	
	while(n!=0){
		rev=rev*10+n%10;
		n=n/10;
	}
	
	if(rev==no)
		printf("%d is a palindrome",no);
	else
		printf("%d is not a palindrome",no);
}
