#include <stdio.h>
int main()
{
    int arr[10]={54,36,20,99,78,43,27,61,5,19};
    int temp;
    for(int i=0; i<10; i++)
    {
        for(int j = i+1; j<10; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }
    printf("Printing sorted array\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}