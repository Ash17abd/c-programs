#include<stdio.h>
int main(){
	int base,height;
	float area;
	printf("enter base and height\n");
	scanf("%d%d",&base,&height);
	area= 0.5*base*height;
	printf("area of the triangle=%f\n",area);
	return 0;
}