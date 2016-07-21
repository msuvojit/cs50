/*
* This is a simple program to capitalize every character in a string
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

int main()
{
	string s = GetString();
	for (int i = 0, n = strlen(s); i < n; i++)
	{
		printf("%c",toupper(s[i]));
	}
	printf("\n");
}
