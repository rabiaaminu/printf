#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
<<<<<<< HEAD
 * On error, -1 is returned, and errno is set appropriately
=======
 * On error, -1 is returned, and errno is set appropriately.
>>>>>>> 7a21a4c6881c9b6c38ac89cb59da8d48fbc006d9
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
