#include<stdio.h>
void rotate_array(int arr[],int size,int d)
{
	int i,j,a;
	for(j=1;j<=d;j++)
	 {
	 	a=arr[0];
     	for(i=0;i<size-1;i++)
	 	arr[i]=arr[i+1];
	    arr[size-1]=a;
	 }
	for(i=0;i<size;i++)
	 printf("%d ",arr[i]);
}
int main()
{
	int n,i,d;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	printf("How many times you want to rotate the array\n");
	scanf("%d",&d);
	rotate_array(arr,n,d);
	return 0;
}
