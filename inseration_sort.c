#include <stdio.h>
#include <math.h>
 
void insertionSort(int arr[], int n)
{
    int i, j,key,t=0;                  //key is what we use for checking if the element is greater that previous element
    i=0;
    j=0;
    key=0;
    for (i = 1; i < n; i++) {
      key = arr[i];
      t=i;
      for(j=i-1;j>=0;j--)         //we will be checking from elements above the key
      {
          if(key<arr[j])          //for every key we check if it is less that the element 
          {
            arr[j+1] = arr[j];   //so we change that place as before element
            t=j;
          }
      }
      arr[t] = key;    //finally we are giving the position without sorted as key
    }
}

 
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 ,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    /*int n;        uncomment this for giving your own input
    printf("Enter no of elements :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d  :",i);
        scanf("%d",&arr[i]);
    }*/
    insertionSort(arr, n);
    for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
 
    return 0;
}
