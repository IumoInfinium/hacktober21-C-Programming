//insertion sort
#include <stdio.h>
void insertionsort(int A[], int n)
{
	for(int i=1;i<n;i++)
	{
		int value=A[i];
		int hole=i;
		while(hole>0 && (A[hole-1]>value))
		{
			A[hole]=A[hole-1];
			hole=hole-1;
		}
		A[hole]=value;
	}
}
int main()//(4,5,2,3,6)
{
	int A[5]={5,4,2,3,6};
	int n=sizeof(A)/sizeof(A[0]);
	insertionsort(A,n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}