#include<stdio.h>
int find_max(int arr[],int size)
{
	int i,max;
  max=arr[0];
  for(i=1;i<size;i++)
   {
    if(max<arr[i])
      max=arr[i];
   }
	return max;
}
void Unique_num(int arr[],int size)
{
	int m=find_max(arr,size),i;
	int hash[m+1];
	for(i=0;i<=m;i++)
	    hash[i]=0;
	for(i=0;i<size;i++)
	 	hash[arr[i]]++;
	printf("Unique elements\n");
	for(i=0;i<=m;i++)
	 	if(hash[i]==1)
	      printf("%d ",i);
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
	Unique_num(arr,n);
	return 0;
}
