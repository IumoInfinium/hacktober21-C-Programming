//Harshit Paneri Code

#include<stdio.h>

int main()
{
    int a,b,c,num;
    float d;
    printf("Enter the serial number from the below list  which you want to calculate:\n  1:Addition\n  2:subtraction\n  3:Multiplication\n  4:Quotient\n  5:Reminder \n");
    scanf("%d",&num);
    switch(num)
    {
       case 1:
            printf("\n  You want addition\n Please enter two integer :\n");
            scanf("%d %d",&a,&b);
            c=a+b;
            printf( "sum of %d and %d is %d\n",a,b,c);
            break;
       case 2:
            printf("\n  You want Subtraction\n Please enter two integer :\n");
            scanf("%d %d",&a,&b);
            c=a-b;
            printf( "sub of %d and %d is %d\n",a,b,c);
            break;
       case 3:
            printf("\n  You want Multiplication\n Please enter two integer :\n");
            scanf("%d %d",&a,&b);
            c=a*b;
            printf( "multiplication of %d and %d is %d\n",a,b,c);
            break;
       case 4:
            printf("\n  You want Quotitent\n Please enter two integer :\n");
            scanf("%d %d",&a,&b);
            d=a/(float)b;
            printf( "Quotient of %d and %d is %0.3f\n",a,b,d);
            break;
       case 5:
            printf("\n  You want Reminder\n Please enter two integer :\n");
            scanf("%d %d",&a,&b);
            c=a%b;
            printf( "Reminder of %d and %d is %d",a,b,c);
            break;
       default:
            printf("    YOU ARE ENTER INVALID NUMBER \n    PLEASE ENTER NUMBER FROM ABOVE LIST ");
            break;

    }
    return 0;
}
