/*Develop a C program for MegeSort*/ 
#include<stdio.h>
void readArray(int [], int);
void mergesort(int [], int, int);
void merge(int [], int, int, int);
void printarray(int [], int);
int i=0;
void main()
{
	int a[50], n;
	printf("Enter total number of elements you want to sort:  ");
	scanf("%d",&n);
	readArray(a, n);
	printf("\nBefore Sorting: \n");
	printarray(a,n);
	mergesort(a,0,n-1);
	printf("\nAfter Sorting: \n");
	printarray(a,n);
}
void readArray(int a[], int n)
{
	printf("Enter the elements to be sorted: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
}
void mergesort(int a[], int lb, int ub)
{
	if(lb<ub)
	{
		int mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	};
}
void merge(int a[], int lb, int mid, int ub)
{
	int i=lb, j=mid+1, k=lb, b[50];
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
	{
		a[k]=b[k];
	}	
}
void printarray(int a[], int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
 
