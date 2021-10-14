# hacktober21-C-Programming
Type of sorting in C/C++:
## Arithemetic 
## Binary Search
## Bubble Sort
## Selection Sort
## Insertion Sort
## Counting Sort
## Quick Sort
## Merge Sort
## Shell Sort
## Heap Sort


## Insertion sort code:
#include <iostream>
using namespace std;
void insertionsorting(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }
    cout << "The sorted values are :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i]  ;
    }
}
int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    cout << "Enter value of elemets is array:";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    insertionsorting(a, n);
    return 0;
}
//Time Complexcity =O(n^2)
