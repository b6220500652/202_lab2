#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
    if (a>=0&&a<=30&&b>=0&&b<=30&&c>=0&&c<=40)
    {
    x=a+b+c;

    if (x >= 80) 
    {
        printf("A");
    } 
    else  if (x >= 75) 
    {
        printf("B+");
    } 
    else  if (x >= 70) 
    {
        printf("B");
    } 
    else  if (x >= 65) 
    {
        printf("C+");
    } 
    else  if (x >= 60) 
    {
        printf("C");
    } 
    else  if (x >= 55) 
    {
        printf("D+");
    } 
    else  if (x >= 50) 
    {
        printf("D");
    } 
    else
    {
        printf("F");
    }
    return 0;
    }
}
