#include<stdio.h>
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num & 1 ==0)
		printf("It is even",num);
	else
		printf(" is odd",num);
	
}