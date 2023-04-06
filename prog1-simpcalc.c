//Simple Calculator

#include <stdio.h>
int main()
{
  char op;
  float num1,num2,result;

  printf("Enter the operator:\n");
  scanf("%c",&op);
  printf("Enter the first number:\n");
  scanf("%f",&num1);
  printf("Enter the second number:\n");
  scanf("%f",&num2);

  if(op=='+')
  {
    result=num1+num2;
  }
  
  else if(op=='-')
  {
    result=num1-num2;
  }

  else if(op=='*')
  {
    result=num1*num2;
  }

  else if(op=='/')
  {
    if (num2==0)
    {
      printf("Divide by zero error\n");
      return-1;
    }
    result=num1/num2;
  }

  else if(op=='%')
  {
    if (num2==0)
    {
      printf("Divide by zero error\n");
      return-1;
    }
    result=(int)num1%(int)num2;
  }
  else 
  {
    printf("Invalid Operation\n");
    return-2;
  }
	
  printf("The result is %f \n", result);
  return 0;

}
