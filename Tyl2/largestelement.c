#include <stdio.h>
int main()
{
    int array[30];
    int loop, largest, n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    largest = array[0];
    for (i = 1; i < n; i++)
    {
        if (largest < array[i])
            largest = array[i];
    }
    printf("Largest element of the given array is: %d", largest);
    return 0;
}
