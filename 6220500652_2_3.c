#include<stdio.h>
int main()
{
	int a,b,c;
	char x[];
	scanf("%d %d %d",&a,&b,&c);
	if(a>=0&&a<=100&&b>=0&&b<=100&&c>=0&&c<=100)
	{
		scanf("%s",&x);
		if(x=='ABC')
		{
			print("%d %d %d",&a,&b,&c);
		}
		else if(x=='ACB')
		{
			print("%d %d %d",&a,&c,&b);
		}
		else if(x=='BAC')
		{
			print("%d %d %d",&b,&a,&c);
		}
		else if(x=='CAB')
		{
			print("%d %d %d",&c,&a,&b);
		}
		else if(x=='CBA')
		{
			print("%d %d %d",&c,&b,&a);
		}
	}
}
