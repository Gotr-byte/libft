/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:07:27 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/04 16:30:07 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
STRCHR(3)                BSD Library Functions Manual                STRCHR(3)

NAME
	 strchr, strrchr -- locate character in string

LIBRARY
	 Standard C Library (libc, -lc)

SYNOPSIS
	 #include <string.h>

	 char *
	 strchr(const char *s, int c);

	 char *
	 strrchr(const char *s, int c);

DESCRIPTION
	 The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.

	 The strrchr() function is identical to strchr(), except it locates the last occurrence of c.

RETURN VALUES
	 The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not appear in the string.

SEE ALSO
	 memchr(3), memmem(3), strcspn(3), strpbrk(3), strsep(3), strspn(3), strstr(3), strtok(3), wcschr(3)

STANDARDS
	 The functions strchr() and strrchr() conform to ISO/IEC 9899:1990 (``ISO C90'').

BSD                             April 19, 1994                             BSD
:
*/
//NEEDS TESTING// what is char pointer to null?
/*
#include <string.h>
#include <stdio.h>
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*h;
	char	*v;
	char	flag;
	size_t	t;

	h = (char *)s;
	t = ft_strlen(s) + 1;
	flag = 0;
	while ((t-- + 1) > 0)
	{
		if (*(h + t) == (char)c)
		{
			v = (h + t);
			return (v);
		}
		if (t == 0)
			return (NULL);
	}
	return (NULL);
}

/*
int main(void)
{
	char *v;
	char *p;
	// char aac[100] = "aacaac";
	
	str2[] = "bonjour";
	
	
	v = ft_strrchr(str2, 's');
	p = strrchr(str2, 's');
	printf ("ft_strrchr: %p\n", v);
	printf ("strrchr: %p\n", p);	
	
	// v = ft_strrchr(aac, 'c');
	// p = strrchr(aac, 'c');
	// printf ("ft_strrchr: %p\n", v);
	// printf ("strrchr: %p\n", p);	
	// ft_strrchr(s, 0)
	// check(ft_strrchr(s, 'l') == s + 8); showLeaks();
	//  check(ft_strrchr(s2, 'l') == s2 + 9); showLeaks();
	// char s[] = "tripouille";
	// char s2[] = "ltripouiel";
	// ft_strrchr(str2, 's')
}
*/
