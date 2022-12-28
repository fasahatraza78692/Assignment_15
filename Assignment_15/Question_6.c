#include<stdio.h>
void reverse(int arr[],int size)
{
	int i,count=0;
	printf("Reverse elements\n");
	 for(i=size-1;i>=0;i--)
	  {
	  	count++;
	  	printf("%d ",arr[i]);
	  }
	  printf("\nElements = %d",count);
}
int main()
{
	int i,n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	reverse(arr,n);
	return 0;
}
