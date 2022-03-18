#include<stdio.h>
#define MAX 100
void readArray(int [], int);
void insertionSort(int [], int);
void printArray(int [], int);
int i, j, temp, ele;
void main()
{
	int a[MAX], n;
	printf("Enter total number of elements you want to sort:  ");
	scanf("%d",&n);
	readArray(a, n);
	printf("\nBefore Sorting:	");
	printArray(a, n);
	insertionSort(a, n);
	printf("\nAfter Sorting:	");
	printArray(a, n);
}
void readArray(int a[], int n)
{
	printf("Enter the elements to be sorted: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
}
void insertionSort(int a[], int n)
{
    for(i=1;i<n;i++)
    {
        ele=a[i];
    	j=i-1;
        while(j>=0 && a[j]>ele) 
	{
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=ele;
    }
}
void printArray(int a[], int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);	
	}	
}

