//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.

#include <stdio.h>

void main(){
	int s1,s2,s3;
	
	printf("Enter a side: ");
	scanf("%d",&s1);
	printf("Enter next side: ");
	scanf("%d",&s2);
	printf("Enter last side: ");
	scanf(" %d",&s3);
	
	if(s1==s2 && s2==s3){
		printf("Equilateral");
	}
	else if(s1==s2 || s2==s3){
		printf("Isosceles");
	}
	else
		printf("Scalene");
}
