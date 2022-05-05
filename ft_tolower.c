/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:47:37 by pbiederm          #+#    #+#             */
/*   Updated: 2022/04/29 20:15:14 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

TOLOWER(3)               BSD Library Functions Manual               TOLOWER(3)

NAME
     tolower, tolower_l -- upper case to lower case letter conversion

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <ctype.h>

     int
     tolower(int c);

     #include <ctype.h>
     #include <xlocale.h>

     int
     tolower_l(int c, locale_t loc);

DESCRIPTION
     The tolower() function converts an upper-case letter to the corresponding lower-case letter.  The argument must be representable as an unsigned char or the value of EOF.

     Although the tolower() function uses the current locale, the tolower_l() function may be passed a locale directly. See xlocale(3) for more information.

RETURN VALUES
     If the argument is an upper-case letter, the tolower() function returns the corresponding lower-case letter if there is one; otherwise, the argument is returned unchanged.

COMPATIBILITY
     The 4.4BSD extension of accepting arguments outside of the range of the unsigned char type in locales with large character sets is considered obsolete and may not be supported in future releases.  The towlower() function should be used instead.

SEE ALSO
     ctype(3), islower(3), towlower(3), xlocale(3)

STANDARDS
     The tolower() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

BSD                              July 17, 2005                             BSD
(END)

*/

//#include <stdio.h>

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c = c + ('z' - 'Z');
	return (c);
}
/*
int main(void)
{
	int a;
	a = ft_tolower('B');
	printf("%c\n", a);
	
}
*/