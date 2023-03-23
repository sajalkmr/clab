
//Bubble sort


#include <stdio.h>
int main()
{
  int array[35], i, j, temp, nums;
  printf("Enter the number of elements: ");
  scanf("%d", &nums);
  printf("Enter %d integers: ", nums);
  for (i = 0; i < nums; i++)
    scanf("%d", &array[i]);
  for (i = 0; i < (nums - 1); i++)
  {
    for (j = 0; j < nums - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
  printf("Sorted list in ascending order:\n");
  for (i = 0; i < nums; i++)
    printf("%d ", array[i]);
  return 0;
}





