#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first number and second number: ");
    scanf("%d%d", &num1,&num2);
    if (num2 == 0) 
    {
        printf("Division by zero is not allowed.\n");
    } 
    else 
    {
        
        if (num1 % num2 == 0) 
        {
            printf("The first number is divisible by the second number.\n");
        } 
        else 
        {
            printf("The first number is not divisible by the second number.\n");
        }
    }

    return 0;
}
