#include <stdio.h>

/* Write a program to copy its input to its output, 
replacing each string of one or more blanks by a single blank. */

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            putchar(' ');
            while((c = getchar()) == ' ');
        }
        putchar(c);
    }
}