/*
* This is a simple program to capitalize every character in a string
*/

#include<stdio.h>
#include<string.h>
#include<cs50.h>

int main()
{
	string s = GetString();
	for (int i = 0, n = strlen(s); i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			printf("%c",s[i]-('a' - 'A'));
		else
			printf("%c",s[i]);
	}
	printf("\n");
}
