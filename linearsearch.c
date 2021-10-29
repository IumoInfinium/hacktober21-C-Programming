#include <stdio.h>
int main()
{
    int n, arr[10] = {1,2,3,4,5,6,7,8,9,10}, flag;
    printf("Enter the element you want to search in the array\n");
    scanf("%d", &n);
    for (int i = 0; i <49; i++)
    {
        if (arr[i] == n)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag != 0)
    {
        printf("The element you want to search is found in the array\n");
    }
    else
    {
        printf("The element you want to search is not found in the array\n");
    }
    
    return 0;
}