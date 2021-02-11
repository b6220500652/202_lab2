#include<stdio.h>
#include<string.h>
int main()
{
    int x,y;
    char a;
    char emoji[2][3][6] = {{"(^_^)","(*o*)","(T_T)"},{"{@_@}","{*v*}","{x_x}"}};
    char z[6];
    scanf("%c",&a);
    scanf("%d",&x);
    y=a+1-x;
    if(a>='A'&&a<='I')
    {
    	strcpy(z,emoji[y%2][0]);
	}  
    else if(a>='J'&&a<='R')
    {
    	strcpy(z,emoji[y%2][1]);
	}
    else
        strcpy(z,emoji[y%2][2]);
        
    if(x%10==5)
    {
    	printf("%c%s/\n",92,z);
	}
    else
        puts(z);

    return 0;
}
