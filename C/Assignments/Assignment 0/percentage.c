#include <stdio.h>

void main(){
	//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.
	int s1=90,s2=92,s3=100,s4=97,s5=95;
	float t=s1+s2+s3+s4+s5;
	float p=(t/500)*100;
	
	printf("Total: %.2lf, Percentage: %.2lf",t,p);
}
