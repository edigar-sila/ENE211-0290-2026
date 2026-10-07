#include <stdio.h>

int main()
{
    int n;
    int registrationNumber;
    char name[50];
    int marks;
    int category;
    char grade;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter info for student %d\n", i);

        printf("Registration number: ");
        scanf("%d", &registrationNumber);

        printf("Name: ");
        scanf(" %[^\n]", name);

        printf("Marks: ");
        scanf("%d", &marks);

        category = marks / 10;

        switch (category)
        {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;

            case 6:
                grade = 'B';
                break;

            case 5:
                grade = 'C';
                break;

            case 4:
                grade = 'D';
                break;

            default:
                grade = 'F';
        }

        printf("\n------------------------------\n");
        printf("       STUDENT INFO\n");
        printf("------------------------------\n");
        printf("Registration No: %d\n", registrationNumber);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        if (marks >= 40)
        {
            printf("Status: Passed\n");
        }
        else
        {
            printf("Status: Failed\n");
        }

        printf("------------------------------\n");
    }

    return 0;
}
