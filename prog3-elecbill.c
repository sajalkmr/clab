//Electricity Bill
#include<stdio.h>
int main()
{
  char name[20];
  float units,charges,total;
  printf("Enter the name:\n");
  scanf("%s",name);
  
  printf("Enter the number of units consumed:\n");
  scanf("%f",&units);
  
  if (units >=0 && units<=200)
    {
    charges=0.8*units;
    }
  else if (units>200 && units<=300)
    {
    charges=(0.8*200)+(0.9*(units-200));
    }
  else if (units>300)
    {
    charges=(0.8*200)+(0.9*100)+(1*(units-300));
    }
  else {
    printf("Invalid entry.\n");
    return -1;
    }
  
  total=charges+100;
  if (total>400)
  {
  total=(total+0.15*total);
  }
  
  printf("......Electricity Bill.....\n");
  printf("\nName=%s", name);
  printf("\nTotal Bill=%f\n",total);
    
} 
