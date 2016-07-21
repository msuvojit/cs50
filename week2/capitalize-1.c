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
		if (islower(s[i]))
			printf("%c",toupper(s[i]));
		else
			printf("%c",s[i]);
	}
	printf("\n");
}
