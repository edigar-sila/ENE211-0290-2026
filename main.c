#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare variables
    int correctpin = 9999;
    int userpin;

    // prompt and capture pin
    printf("Enter PIN: ");
    scanf("%d", &userpin);

    if (userpin == correctpin)
    {
        printf("access granted\n");
    }
    //if length is shorter than required;
    else if (userpin < 999)
    {
        printf("try again\n");
    }
    else if (userpin > 9999)
    {
        printf("access denied\n");
    }
    else
    {
        printf("access granted\n");
    }

    return 0;
}
