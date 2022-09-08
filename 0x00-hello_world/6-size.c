#include <stdio.h>

/**
 * main - outputs datatype sizes as per computer architecture
 * return: 0  on success and non-zero on fail
 */
int main(void)
{
	printf("Size of a char: %d byte(s) \n Size of an int: %d byte(s)\n Size of a long int: %d byte(s)\n Size of a long long int: %d byte(s)\n Size of a float: %d byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float))
	return (0);
}
