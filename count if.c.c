#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int correctpin = 9999;
    int userpin;
    int count = 0;
    clock_t start_time;

    while (count < 3)
    {
        printf("Enter your PIN: ");
        scanf("%d", &userpin);

        if (userpin == correctpin)
        {
            printf("Access granted\n");
            return 0;
        }

        count++;
       //try again
        if (count == 2)
        {
            printf("Warning: You have one more attempt left.\n");//
        }
        //last attempt
        else if (count < 3)
        {
            printf("Access denied. Try again.\n");
        }
    }

    printf("Too many incorrect attempts. User locked out for 20 seconds.\n");

    start_time = clock();

    while (clock() - start_time < 20 * CLOCKS_PER_SEC)
    {
        /* Wait for 20 seconds */
    }
//start program again
    printf("Lockout finished. Please run the program again.\n");

    return 0;
}
