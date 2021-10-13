//Yash Soni

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}, num = 14, low = 0, high = 15, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == num)
        {
            printf("The number %d is at the index %d .", num, mid);
            break;
        }
        if (num < arr[mid]) //14<7
        {
            high = mid-1;
        }
        else if (num > arr[mid]) //14>7
        {
            low = mid+1;
        }
    }
    if (low > high)
    {
        printf("Error");
    }

    return 0;
}
