#include<stdio.h>
void readarray(int [], int);
void printarray(int [], int);
void linear_Search(int [], int, int);
int i;
void main(){
	int a[100],n,key;
	printf("Enter number of elements you want to insert into the Array : \t");
	scanf("%d",&n);
	readarray(a, n);
	printarray(a, n);
	printf("\nEnter the element to find in the list : \t");
	scanf("%d",&key);
	linear_Search(a, n, key);
}
void readarray(int a[], int n)
{
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
}
void printarray(int a[], int n)
{
	printf("The Elements in the Array are : ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);	
	}	
}
void linear_Search(int a[], int n, int key)
{
	int found=0;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			printf("The element %d found at index a[%d] and postion = %d\n",key,i,i+1);
			found=1;
		}
	}
	if(found==0)
	{
		printf("Element not Found");
	}
} 
