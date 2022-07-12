/**
 * _puts - prints a string, followed by a new line.
 * @str: input string to print.
 */
int _putchar(char c);
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
