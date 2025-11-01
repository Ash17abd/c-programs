#include<stdio.h>
int table(int);
int main(){
	int n;
	printf("Enter n value");
	scanf("%d",&n);
	printf("The multiplication table is \n");
	table(n);
}
int table(int m){
	int i;
	for(i=1;i<=10;i++)
	printf("%d*%d=%d\n",m,i,m*i);
	return 0;
}