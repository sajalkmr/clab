#include<stdio.h>
int main(){
    float ftemp, ctemp, choice;
    printf("1. Convert Fahrenheit to Celsiu\n");
    printf("2. Convert Celsiu to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%f", &choice);
    if(choice == 1){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &ftemp);
        ctemp = (ftemp - 32) * 5 / 9;
        printf("The temperature in Celsiu is: %f", ctemp);
    }
    else if(choice == 2){
        printf("Enter the temperature in Celsiu: ");
        scanf("%f", &ctemp);
        ftemp = (ctemp * 9 / 5) + 32;
        printf("The temperature in Fahrenheit is: %f", ftemp);
    }
    else{
        printf("Invalid choice");
    }
}