#include <stdio.h>
int main()
{
 int a,b,c;
 printf("Enter a,b,c:");
 scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c){
printf("largest is %d",a);
}

else
{
if(b>c)
{
printf("the largest is %d",b);
}
}
}
else
{
printf("largest is %d",c);
}

return 0;
}
