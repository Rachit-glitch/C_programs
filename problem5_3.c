#include <stdio.h>

int main()
{
    float score1, score2, score3, score4, score5;
    float average;

    // Ask for five test scores
    printf("Enter the first test score: ");
    scanf("%f", &score1);

    printf("Enter the second test score: ");
    scanf("%f", &score2);

    printf("Enter the third test score: ");
    scanf("%f", &score3);

    printf("Enter the fourth test score: ");
    scanf("%f", &score4);

    printf("Enter the fifth test score: ");
    scanf("%f", &score5);

    // Calculate the average
    average = (score1 + score2 + score3 + score4 + score5) / 5;

    // Display the average with one decimal point
    printf("The average test score is: %.1f\n", average);

    return 0;
}
