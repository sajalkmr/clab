#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int indices[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        indices[i] = i;
    }
    int key;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    // Bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // Swap the indices as well
                int temp_index = indices[j];
                indices[j] = indices[j + 1];
                indices[j + 1] = temp_index;
            }
        }
    }
    // Binary search
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("Element found at index %d\n", indices[mid]);
            return 0;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("Element not found\n");
    return 0;
}