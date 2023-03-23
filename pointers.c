#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    float a[10], mean, sd, sum, var;
    float *p; // p is a pointer to float value

    printf("\nEnter Number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements: ");
    p = a; // pointer p points to first element of a
    for (i = 0; i < n; i++)
    {
        scanf("%f", p);
        p++; // pointer p points to the next element of the array
    }

    p = a; // Initialize p to the first element of the array
    printf("\nInput Elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%f ", *p);
        p++; // Pointer p is made to point to the next element
    }

    p = a; // Initialize p to the first element of the array
    sum = sd = mean = var = 0;

    // Find the sum of the array elements
    for (i = 0; i < n; i++)
    {
        sum = sum + (*p);
        p++;
    }

    // Find the mean
    mean = sum / n;

    // Find variance
    p = a;
    for (i = 0; i < n; i++)
    {
        var = var + pow((*p - mean), 2);
        p++;
    }
    var = var / n;

    // Find Standard Deviation
    sd = sqrt(var);

    // Print Sum, mean and Standard Deviation
    printf("\n\nMean = %f\nSum = %f\nSD = %f\nVar = %f\n", mean, sum, sd, var);

    return 0;
}