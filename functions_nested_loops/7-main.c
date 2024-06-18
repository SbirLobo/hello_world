#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(0);
    print_last_digit(1);
    print_last_digit(9028);
    print_last_digit(58);
    r = print_last_digit(-10787024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
