#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text1[] = "and that piece of art is useful\"";
	char text2[] = " - Dora Korpar, 2015-10-19\n";

	fwrite(&text1, sizeof(char), strlen(text1), stderr);
	fwrite(&text2, sizeof(char), strlen(text2), stderr);
	return (1);
}
