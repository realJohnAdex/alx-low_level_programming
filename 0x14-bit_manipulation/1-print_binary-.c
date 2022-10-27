#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
        int i, bits, result;

        bits = sizeof(unsigned long int) * 8;
        for (i = bits - 1; i >= 0; i--)
        {
                result = n >> i;
                if (result & 1)
                        _putchar('1');
                else
                        _putchar('0');
        }
}
