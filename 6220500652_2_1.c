#include<stdio.h>
int main()
{
	int a,b,c,x;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	x=a+b+c;
	if(80>=x<=100)
		printf("A");
	else if(75>=x<=79)
		printf("B+");
	else if(70>=x<=74)
		printf("B");
	else if(65>=x<=69)
		printf("C+");
	else if(60>=x<=64)
		printf("C");
	else if(55>=x<=59)
		printf("D+");
	else if(50>=x<=54)
		printf("D");
	else if(0>=x<=49)
		printf("F");
	
}
