//Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.
#include<stdio.h>
void divisible(int x){
	
	if(x%3==0 && x%5==0){
		printf("number is divisible by 3 and 5\n ");
	}
	else{
		printf("number is not divisible by 3 and 5.");
	}
}
void main(){
	int a;
	printf("Enter any value :- ");
	scanf("%d",&a);
	divisible(a);
}
