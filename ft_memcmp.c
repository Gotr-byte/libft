/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:17:02 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/03 10:42:21 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
MEMCMP(3)                BSD Library Functions Manual   
             MEMCMP(3)

NAME
     memcmp -- compare byte string

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>

     int
     memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2. 
	 Both strings are assumed to be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical, 
	 otherwise returns the difference between the first two differing bytes 
	 (treated as unsigned char values, so that `\200' is greater than `\0', 
	 for example).  Zero-length strings are always identical.  This
     behavior is not required by C and portable code should only 
	 depend on the sign of the returned value.

SEE ALSO
     bcmp(3), strcasecmp(3), strcmp(3), strcoll(3), strxfrm(3), wmemcmp(3)

STANDARDS
     The memcmp() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

BSD                              June 4, 1993                              BSD
(END)
*/
/*
#include <string.h>
#include <string.h>
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;

	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*(t1 + i) != *(t2 + i))
			return ((*(t1 + i)) - (*(t2 + i)));
		i++;
	}
	return (0);
}
/*
int main()
{
	printf( "ft_memcmp: %d\n", ft_memcmp("", "", 4));
	printf( "memcmp: %d\n", memcmp("", "", 4));
	printf( "ft_memcmp: %d\n", ft_memcmp("t\200", "t\0", 2));
	printf( "memcmp: %d\n", memcmp("t\200", "t\0", 2));

}
*/
