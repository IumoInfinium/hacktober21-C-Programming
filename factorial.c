#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("enter number whose factorial you want\n");
    scanf("%d",&a);
    int ans= fact(a);
    printf("factorial of %d = %d",a,ans);
    return 0;
}
int fact(int x)
{
    if(x==1) return 1;
    else return x*fact(x-1);
}