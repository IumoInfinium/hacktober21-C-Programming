#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void selection_sort(int *, int );
int main()
{
    int *arr = (int *)malloc((sizeof(int)));
    int num=0;
    char c;
    printf("please enter array (eg. 9 48 65 23 ) = ");
    fflush(stdin);
    c = getchar();
    int len=0;
    while (1)
    {
        if(c==' ' || c=='\n')
        {
            if(len!=0)
            {
                arr = (int *)realloc(arr,(len+1)*sizeof(int));
            }
            *(arr+len)=num;
            len=len+1;
            num=0;
            if(c=='\n') break;
        }
        else num=(num*10)+(c-'0'); 
        c = getchar();
    }
    printf("\n\n");
    selection_sort(arr,len);
    printf("\nSorted array =\n");
    for(int i=0;i<len;i++) printf("%d ",*(arr+i));
    
    return 0;
}


void selection_sort(int *array, int n)
{
    time_t begin = time(NULL);
    printf("\n%.15f\n",begin);
    for(int i=0;i<n-1;i++) // holding initial index needed to be swapped
    {
        int curr_min_ind=i;
        
        for(int j=i+1;j<n;j++) //loop to  find out minimum element in the remaining unsorted array
        {
            if (array[j]<array[curr_min_ind])
            {
                curr_min_ind=j;   //set the min value index 
            }
        }

        int temp = array[i];   
        array[i]=array[curr_min_ind];  //swapping
        array[curr_min_ind]=temp;
        printf("\npass %d\n",i+1);
        for(int i=0;i<n;i++) printf("%d ",*(array+i));
    }
    time_t end = time(NULL);
    printf("\n%.15f\n",end);
    printf("Time taken: %.15fs\n", (end-begin));
}