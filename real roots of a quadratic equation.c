#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,e,x,y;
	printf("Enter a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	d=sqrt(b*b-4*a*c);
	e=2*a;
	x=(-b+d)/e;
	y=(-b-d)/e;
	printf("x=%5.2f y=%5.2f",x,y);
	return 0;
}