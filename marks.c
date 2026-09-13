#include <stdio.h>

int main() {
    char name[50];
    int m1, m2, m3;
    int total;
    float average;

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("Enter marks for Subject 1: ");
    scanf("%d", &m1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &m2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &m3);

    total = m1 + m2 + m3;
    average = total / 3.0;

    printf("\nStudent Name: %s", name);
    printf("\nTotal Marks: %d", total);
    printf("\nAverage: %.2f", average);

    if (m1 >= 35 && m2 >= 35 && m3 >= 35)
        printf("\nResult: PASS");
    else
        printf("\nResult: FAIL");

    return 0;
}