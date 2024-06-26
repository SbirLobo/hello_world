#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];
    int array2[4] = { 999 };

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    print_array(array, 0);
    print_array(array, -1);
    print_array(array2, 2);
    return (0);
}
