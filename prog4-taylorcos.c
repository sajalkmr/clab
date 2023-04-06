//compute cosine using taylor series, compare with built in function

#include <stdio.h>
#include <math.h>
#define PI 3.1428

int main()
  {
    float degree,x,nume,deno,term,sum;
    int i;
    printf("Enter the degree value:");
    scanf("%f", &degree);

    x=degree*(PI/180);
    nume=1;
    deno=1;
    sum=0;
    i=0;

    do{
      term=nume/deno;
      sum=sum+term;
      i=i+2;
      nume=-nume*x*x;
      deno=deno*(i-1)*i;
      }
      while(fabs(term)>0.00001);
      printf("cos%f using Taylor series:%f\n", degree,sum);
      printf("cos%f using built in function:%f", degree, cos(x));
    }