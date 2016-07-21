/*
* This program is to iterate through the character and print their  corresponding value
*/

#include<stdio.h>

int main(void)
{
	for (char c = 'A'; c <= 'Z'; c++)
		printf("%i: %c\n", (int) c, c);
}
