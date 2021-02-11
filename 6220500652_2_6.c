#include<stdio.h>
#include<string.h>
int main()
{
    char x[10][10]={"Zero","One","Two","Three", "Four","Five","Six","Seven","Eight","Nine"};
    char N[1000000];
    scanf("%s",N);
    printf("%s",x[N[0]-'0']);
    int i;
    for ( i = 1; N[i]!='\0' ; i++)
    {
         printf("-%s",x[N[i]-'0']);
    }
}
