#include <unistd.h>
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the array of integers
 * @n: the number of elements to print
 */void print_array(int *a, int n)
{
    char buffer[12];
    int len, i;

    for (i = 0; i < n; i++)
    {
        if (i > 0)
            write(1, ", ", 2);

        len = snprintf(buffer, sizeof(buffer), "%d", a[i]);
        write(1, buffer, len);
    }
    write(1, "\n", 1);
}
