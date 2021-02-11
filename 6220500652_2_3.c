#include<stdio.h>
int main()
{
	int a=3,b[a],i,j;
    char c[a];
    for (i=0;i<a;i++)
    {
       scanf("%d",&b[i]);
    }
   for (i=0;i<a;i++)
   {
       scanf(" %c",&c[i]);
   }
   i=0;
	do
    {
        if(i<a-1&&b[i]>b[i+1])
        {
            j=b[i+1];
            b[i+1]=b[i];
            b[i]=j;
            i=0;
        }
        else
        {
            i++;
        }
         
    }while(i<a);

    for(i=0;i<a;i++)
    {
        if(c[i]=='A')
        {
            printf("%d ",b[0]);
        }
        else if(c[i]=='B')
        {
            printf("%d ",b[1]);
        }
        else if(c[i]=='C')
        {
            printf("%d ",b[2]);
        }
        
    }
}
