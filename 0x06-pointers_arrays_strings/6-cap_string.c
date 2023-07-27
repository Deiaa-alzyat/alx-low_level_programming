#include "main.h"
#include <stdio.h>
/**
 * islower  - determines whether ascii is lowercase
 * 0c: character
 * Return:1 if true, 0 if false
 */
int isLower(char c){
	return (c>=97 &&c<=122);
}

/**
 * isDelimeter determines whether ascii is a delimeter 
 * 0c: character
 * Return: 1 if true, 0 if false
 */
int isDelimeter(char c)
{
        int i;
        char delimeter[] = " \t\n,.!?\"(){}";
        for (i=0;i<12;i++)
                if (c==delimeter[i])
                        return (1);
        return (0);
}
/**
 * cap_string - capitalizes all words of a string.
 *
 * 0s: the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *s)
{
	char *ptr=s;
	int foundDelimeter=1;
	while (*s)
	{
		if (isDelimeter(*s))
			foundDelimeter=1;
		else if (isLower(*s) && foundDelimeter)
		{
			*s-=32;
			foundDelimeter=0;
		}
		else
			foundDelimeter=0;
		s++;
	}
	return (ptr);
}
