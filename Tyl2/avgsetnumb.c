#include <stdio.h>

int main()
{
  int i, n, sum = 0;
  int marks[50];
  float average;
  
  printf("Enter number of elements: ");
  scanf("%d", &n);
    
  printf("Enter elements in array: ");
  for (i = 0; i < n; i++) 
  {
    scanf("%d", &marks[i]); 
  }
  
  for (i = 0; i < n; i++) 
  {
    sum += marks[i];
  }

  average = (float) sum / n;

  printf("Average = %.2f\n", average);

  return 0;
}
