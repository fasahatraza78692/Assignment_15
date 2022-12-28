#include<stdio.h>
int find_min(int a[],int size)
{
  int i,min;
  min=a[0];
  for(i=1;i<size;i++)
  {
    if(min>a[i])
      min=a[i];
  }
 return min;
}
int main()
{
  int n,i;
  printf("Enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  
  
 printf("min = %d",find_min(a,n));
return 0;
}

    