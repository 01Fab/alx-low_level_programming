#include "holberton.h"
/**
 * _isalpha - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}[master 1c29294] #include "holberton.h" /**  * _isalpha - Check Main  * @c: An input character  * Description: function returns 1 if the character is a  * letter, lowercase or uppercase.  * Return: 1 or 0 in otherwise.  */ int _isalpha(int c) { char lower, upper; int isletter = 0;
 1 file changed, 23 insertions(+)
 create mode 100644 0x02-functions_nested_loops/4-isalpha.c
