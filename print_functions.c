#include "main.h"

/************************* PRINT CHAR *************************/

/**
 * print_char - Prints a char
 * by Lynn and Youssef
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculate active flags
 * @width: Calculate width
 * @precision: Precision  specification
 * @size: size specification
 * Return: Number of chars printed
 */
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
/************************* PRINT A STRING *************************/
/**
 * print_string - Prints a string
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculate active flags
 * @width: Calculate width
 * @precision: Precision  specification
 * @size: size specification
 * Return: Number of chars printed
 */
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	int length = 0, a;
	char *str = va_arg (types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = "      ";
	}
}
