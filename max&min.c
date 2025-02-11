#include <stdio.h>
int main()
{
  int a[20],i,max,min,p1,p2,n;
  printf("Enter array size");
  scanf("%d",&n);
  printf("Enter the elements");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
    max=a[0];
    min=a[0];
   for(i=1;i<n;i++)
   {
    if(a[i]>max)
    {
     max=a[i];
     p1=i;
    }
   if(a[i]<min)
   {
    min=a[i];
    p2=i;
   }
  }
   printf("max is %d at %d", max ,p1);
   printf("min %d at %d" , min ,p2);
}  
