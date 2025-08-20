//Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.

#include <stdio.h>

void main(){
	char res;
	int purchase,dis_price;
	
	printf("Are you a Student? ");
	scanf("%c",&res);
	
	printf("Enter amount of your purchase: ");
	scanf(" %d",&purchase);
	
	if(res=='y'){
		if(purchase>500){
			dis_price=purchase-(purchase*.2);
		}
		else{
			dis_price=purchase-purchase*.10;
		}
		
		printf("%d",dis_price);
	}
	else{
		if(purchase>600){
			dis_price=purchase-purchase*.15;
			
			printf("%d",dis_price);
		}
		else
		printf("No discount.");
	}
	
}
