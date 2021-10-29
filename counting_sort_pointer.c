#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void counting_sort(int *, int );
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
    counting_sort(arr,len);
    printf("\nSorted array =\n");
    for(int i=0;i<len;i++) printf("%d ",*(arr+i));
    
    return 0;
}

void counting_sort( int *array , int n)
{
    int max = *(array+0);
    for(int i=0;i<n;i++)
        if(*(array+i)>max) max = *(array+i);    // finding largest element 

    
    int *value_array =(int *)calloc((max+1),sizeof(int));   // making count array
    for(int j=0;j<n;j++)
    {
        value_array[array[j]]++;
        // *(value_array+*(array+j))+=1;      // setting counts
    }
    int ind=0;
    for(int i=0;i<=max;i++)
    {
        for(int k=1;k<=*(value_array+i);k++)
        {
            *(array+ind)=i;   // updating values in original arraay
            ind+=1;
        }
    }
}
