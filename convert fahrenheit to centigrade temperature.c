#include<stdio.h>
int main(){
	float f,c;
	printf("Enter temperature in fahrenheit\n");
	scanf("%f",&f);
	c = (f-32) * 5 / 9;
	printf("centrigrade temperature=%f",c);
	return 0;
}