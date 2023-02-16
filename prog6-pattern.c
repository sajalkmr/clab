#include <stdio.h>

int main() {
    int n;  // number of rows to print
    printf("enter number of rows:");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++) {
        // print spaces before the num
        for (int j = 1; j <= (n - i); j++) {
            printf("  ");
        }
        
        // print the increasing num
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        // print the decreasing num
        for (int j = i-1; j >= 1; j--) {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    return 0;
}
