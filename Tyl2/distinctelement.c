#include <stdio.h>

int main()
{
    int i, j, n;
    int num[30];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (num[i] == num[j])
                break;
        }
        if (i == j)
            printf("%d ", num[i]);
    }
}
