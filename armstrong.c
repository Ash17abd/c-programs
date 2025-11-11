#include<stdio.h>
int main(){
	int n,d,sum=0,r;
	printf("enter n values");
	scanf("%d",&n);
	r=n;
	do{
		d=n%10;
		sum=sum+d*d*d;
		n=n/10;
	}
	while (n!=0);
	if(sum==r)
	printf("%d is Armstrong");
	else
	printf("%d is not a Armstrong");
	return 0;
	
}