#include <stdio.h>
int main()
{
 int n,i=1,f=1;
 printf("Enter a number");
 scanf("%d",&n);
 while(i<=n)
  {
   f=f*i;
   i++;
  }
  if(n<0)
  printf("Invalid entry");
  else
  printf("factorial=%d",f);
  return 0;
}
