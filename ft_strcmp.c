/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:19:57 by pbiederm          #+#    #+#             */
/*   Updated: 2022/04/30 14:29:40 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

STRCMP(3)                BSD Library Functions Manual                STRCMP(3)

NAME
     strcmp, strncmp -- compare strings

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>

     int
     strcmp(const char *s1, const char *s2);

     int
     strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the null-terminated strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.  The comparison is done using unsigned characters, so that `\200' is greater
     than `\0'.

SEE ALSO
     bcmp(3), memcmp(3), strcasecmp(3), strcoll(3), strxfrm(3), wcscmp(3)

STANDARDS
     The strcmp() and strncmp() functions conform to ISO/IEC 9899:1990 (``ISO C90'').

:

*/
/*
#include <string.h>
#include <stdio.h>
*/
int	ft_strcmp(const char *s1, const char *s2)
{
	char *t1;
	char *t2;
	int i;

	i = 0;
	t1 = (char *)s1;
	t2 = (char *)s2;
	while (*(t1 + i) != '\0' || *(t2 + i) != '\0')
	{
		if (*(t1 + i) > *(t2 + i))
			return (1);
		if (*(t1 + i) < *(t2 + i))
			return(-1);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf( "strcmp: %d\n", strcmp("aaaa", ""));
	printf( "ft_strcmp: %d\n", ft_strcmp("aaaa", ""));
}
*/