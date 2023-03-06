/**
 * print_name - function prints a name
 *@name: char of inputted name
 *@f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	{
		f(name);
	}
}
