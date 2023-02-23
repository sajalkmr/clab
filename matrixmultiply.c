#include <stdio.h>

int main() 
{
    int m1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int result[3][3] = {0};

    // Multiplying matrices
    for(int i=0; i<3; i++) 
    {
        for(int j=0; j<3; j++) 
        {
            for(int k=0; k<3; k++) 
            {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Displaying result
    printf("Result of matrix multiplication:\n");
    for(int i=0; i<3; i++) 
    {
        for(int j=0; j<3; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}