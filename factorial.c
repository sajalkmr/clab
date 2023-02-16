#include<stdio.h>
int main(){
    int enteredNumber, i, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &enteredNumber);
    if(enteredNumber < 0){
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else{
        for(i = 1; i <= enteredNumber; ++i){
            factorial *= i;
        }
        printf("Factorial of %d = %d", enteredNumber, factorial);
    }
}