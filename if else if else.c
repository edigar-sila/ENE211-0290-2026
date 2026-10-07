#include <stdio.h>

int main()
{
    int n;
    int registrationNumber;
    char name[50];
    int marks;
    char grade;

         printf("Enter the no of students: ");//input
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
            printf("\nEnter info for student %d\n", i);//data capture

        printf("Registration number: ");
        scanf("%d", &registrationNumber);

            printf("Name: ");
        scanf(" %[^\n]", name);

            printf("Marks: ");
        scanf("%d", &marks);
    //grading manner
        if (marks >= 70 && marks <= 100)
        {
            grade = 'A';
        }
        else if (marks >= 60)
        {
            grade = 'B';
        }
        else if (marks >= 50)
        {
            grade = 'C';
        }
        else if (marks >= 40)
        {
            grade = 'D';
        }
        else
        {
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
