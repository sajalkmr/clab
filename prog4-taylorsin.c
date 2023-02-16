//Taylor Series Sinx
#include <stdio.h>
#include <math.h>
#define PI 3.1428

int main()
  {
    float degree,x,nume,deno,term,sum;
    int i;
    printf("Enter the degree value:\n");
    scanf("%f", &degree);
    
    x=degree*(PI/180);
    nume=x;
    deno=1;
    sum=0;
    i=1;
    
    do{
      term=nume/deno;
      sum=sum+term;
      i=i+2;
      nume=-nume*x*x;
      deno=deno*(i-1)*i;
      }
      while(fabs(term)>0.00001);
      printf("sin%f using Taylor series:%f\n", degree,sum);
      printf("sin%f using built in function:%f\n", degree, sin(x));
   }
