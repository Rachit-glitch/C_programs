#include <stdio.h>

int main() {
    float weight;
    float cost;
    printf("Enter the weight of the package (in pounds): ");
    scanf("%f", &weight);


    if (weight <= 2.0) 
    {
        cost = 5.00;
    } else if (weight <= 10.0) 
    {
        cost = 10.00;
    } else 
    {
        cost = 15.00;
    }
    printf("The shipping cost is: $%.2f\n", cost);

    return 0;
}
