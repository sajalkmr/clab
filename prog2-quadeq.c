//C program to compute roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main()
{
  float a,b,c;
  float d,r1,r2,rpart,ipart;
  printf("Enter the coefficients a,b,c :\n");
  scanf("%f%f%f", &a,&b,&c);
  if (a==0)
  {
    printf("This is not a quadratic equation.\n");
    return -1;
  }
  
  else
  {
      
      d=(b*b)-(4*a*c);
      
      
      if(d==0)
      {
       printf("Roots are real and equal:\n");
       r1=(-b)/(2*a);
       r2=r1;
       printf("Root1 = %f\n",r1);
       printf("Root2 = %f\n",r2);
      }
      else if(d>0)
      {
       printf("Roots are real and distinct: \n");
       r1=((-b)+sqrt(d))/(2*a);
       r2=((-b)-sqrt(d))/(2*a);
        
       printf("Root1 = %f\n",r1);
       printf("Root2 = %f\n",r2);
      }
        
      else 
      {
        printf("Roots are imaginary:\n");
        rpart=(-b)/(2*a);
        ipart=sqrt(-d)/(2*a);
        printf("Root1=%f+i%f\n",rpart,ipart);
        printf("Root2=%f-i%f\n",rpart,ipart);
      }
      return 0;
      }
}       
        
   
