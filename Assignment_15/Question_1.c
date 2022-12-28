#include<stdio.h>
int find_max(int a[],int size)
{
  int i,max;
  max=a[0];
  for(i=1;i<size;i++)
  {
    if(max<a[i])
      max=a[i];
  }
 return max;
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
  
  
 printf("max = %d",find_max(a,n));
return 0;
}

    