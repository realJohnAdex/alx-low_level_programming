#include <stdio.h>
/**
 * modif_my_char_var - set char to 'o' then 'l'
 * @cc: a pointer the char we want to set to 'o'
 * @ccc: char we want to set to 'l'
 *
 * Return: nothing
 */
void modif_my_char_var(char *cc, char ccc)
{
	printf("Value of 'cc': %p\n", cc);
	printf("Address of 'cc': %p\n", &cc);
	*cc = 'o';
	printf("Value of 'ccc': %c\n", ccc);
	printf("Address of 'ccc': %p\n", &ccc);
	ccc = 'l';
}

/**
 * main - how to change the value of a variable from outside the function
 * it is declared in, using a pointer.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	c = 'H';
	p = &c;
	printf("Value of 'c' before the call: %c\n", c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modif_my_char_var(p, c);
	printf("Value of 'c' after the call: %c\n", c);
	printf("Value of 'p' after the call: %p\n", p);
	return (0);
}
