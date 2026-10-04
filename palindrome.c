#include <stdio.h>

int main()
{
    int n, rev = 0, rem, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(original == rev)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}
