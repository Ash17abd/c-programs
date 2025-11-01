#include<stdio.h>
int main(){
 int p,t,r;
 float si;
 printf("enter price,time and rate of interest\n");
 scanf("%d%d%d",&p,&t,&r);
 si = p * t * r / 100;
 printf("simple interest=%.2f",si);
 return 0;	
}