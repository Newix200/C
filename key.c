#include <stdio.h>
int main()
{
  int a[20],i,n ,pos=0,key,flag=0;
  printf("Enter array size");
  scanf("%d",&n);
  printf("Enter the elements");
   for(i=0;i<n;i++)
   {
    scanf("%d",& a[i]);
   }
   for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
    printf("\nEnter the key");
    scanf("%d",&key);
   for(i=0;i<n;i++){
    if (a[i]==key)
    {
     flag=1;
     pos=i;
    } break;
    }
    if (flag==0)
    {
     printf("Element not found");
    }
    else
    {
    printf("Element%d is found at %d",key,pos);
    }
}
    
