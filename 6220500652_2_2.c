#include<stdio.h>
int main()
{
    char x;
    float t,price,y;
    scanf("%c",&x);
    scanf("%f",&t);
    if (x=='A')
    {
        if(t>200)
        {
        t=t-200;
        y=(t-(int)t)*100/20;
        t=(int)t*3;
        price=199+t+y;
        }
        else
        {
            price=199;
        }
    }
    else if (x=='B')
    {
        if(t>400)
        {
        t=t-400;
        y=(t-(int)t)*100/30;
        t=(int)t*2;
        price=299+t+y;
        }
        else
        {
            price=299;
        }
    }
    printf("%0.2f",price);
    
}
