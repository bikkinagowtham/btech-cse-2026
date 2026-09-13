#include <stdio.h>

int main()
{
    int n, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if(original == reverse)
    {
        printf("It is a palindrome number");
    }
    else
    {
        printf("It is not a palindrome number");
    }

    return 0;
}
