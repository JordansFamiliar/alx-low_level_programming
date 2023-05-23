#include "main.h"
#include <stdlib.h>

/**
 * length - returns the length of a string
 * @s: string
 * Return: int
 */
int length(char *s)
{
	if (*s)
		return (1 + length(s + 1));
	return (0);
}
/**
 * _strrev - copies string
 * @src: source string
 * @dest: destination string
 * @n: number of characters
 * @l: length of string
 * @i: index
 * Return: char *
 */
char *_strrev(char *src, char *dest, int n, int l, int i)
{
	int num;

	if (n * 2 == l)
		num = 1;
	else
		num = 2;
	if (i < n)
	{
		dest[i] = src[((n * 2) - num) - i];
		return (_strrev(src, dest, n, l, ++i));
	}
	if (i == n)
		dest[i] = '\0';
	return (dest);
}
/**
 * _strcpy - copies a substring
 * @src: source string
 * @dest: destination string
 * @n: number of characters
 * @i: index
 * Return: char *
 */
char *_strcpy(char *src, char *dest, int n, int i)
{
	if (i < n)
	{
		dest[i] = src[i];
		return (_strcpy(src, dest, n, ++i));
	}
	if (i == n)
		dest[i] = '\0';
	return (dest);
}
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * @i: index
 * Return: int
 */
int _strcmp(char *s1, char *s2, int i)
{
	if (s1[i])
	{
		if (s1[i] != s2[i])
			return (0);
		if (s1[i] == s2[i])
			return (_strcmp(s1, s2, ++i));
	}
	return (1);
}
/**
 * is_palindrome - returns 1 is a string is a palindrome and 0 if not
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	char *str1, *str2;
	int index, len = length(s);

	if (len == 1 || len == 0)
		return (1);
	index = (len % 2 != 0) ? (len / 2) + 1 : len / 2;
	str1 = malloc(sizeof(char) * index + 1);
	if (str1 == NULL)
		return (0);
	str2 = malloc(sizeof(char) * index + 1);
	if (str2 == NULL)
		return (0);
	str1 = _strcpy(s, str1, index, 0);
	str2 = _strrev(s, str2, index, len, 0);
	return (_strcmp(str1, str2, 0));
}
