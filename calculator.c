#include <stdio.h>
int main()
{
	int num1,num2,mod;
	float sum,sub,mult,div;
	char operation;
	printf("Enter num1 and num2");
	scanf("%d%d",&num1,&num2);
	printf("Enter the character");
	scanf(" %c",&operation);
	switch (operation)
	{
	case('+'):
		sum=num1+num2;
		printf("the sum is :%f",sum);
	break;
	case('-'):
		sub=num1-num2;
		printf("The substracted value is :%f",sub);
	break;
	case('*'):
		mult=num1*num2;
		printf("The product value is :%f",mult);
	break;
	case('/'):
		div=num1/num2;
		printf("The divided value is :%f",div);
	break;
	case('%'):
		mod=num1%num2;
		printf("The value is :%d",mod);
    break;
    default:
    printf("Invalid");
    break;
  }
  return 0;
}
