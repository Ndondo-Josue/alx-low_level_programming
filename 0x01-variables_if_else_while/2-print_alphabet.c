#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    for(int x = 'A'; x <= 'z'; x++) // Notice (x <= 'Z') > > (x <= 'z')
    {
        x = tolower(x);
        putchar(x);
    }
    return 0;
}
