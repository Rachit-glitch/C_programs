#include <stdio.h>
int main() {
    int day;
    printf("Enter a number between 1 and 7 representing a day of the week");
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Sunday.  It's is a weekday\n");
              break;
        case 2:
            printf("Monday.  It's is a weekday\n");
              break;
        case 3:
             printf("Tuesday.  It's is a weekday\n");
              break;
        case 4:
            printf("Wednesday.  It's is a weekday\n");
              break;
        case 5: 
            printf("Thursday. It's is a weekday\n");
              break;
        case 6: 
            printf("It's a weekday.\n");
            break;
        case 7: 
            printf("It's the weekend!\n");
            break;    
        default:
            
            printf("Invalid! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
