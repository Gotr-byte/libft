/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:05:20 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/11 10:08:58 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

STRDUP(3)                BSD Library Functions Manual                STRDUP(3)

NAME
	 strdup, strndup -- save a copy of a string

LIBRARY
	 Standard C Library (libc, -lc)

SYNOPSIS
	 #include <string.h>

	 char *
	 strdup(const char *s1);

	 char *
	 strndup(const char *s1, size_t n);

DESCRIPTION
	 The strdup() function allocates sufficient memory for a copy of the
	 string s1, does the copy, and returns a pointer to it.  The pointer may
	 subsequently be used as an argument to the function free(3).

	 If insufficient memory is available, NULL is returned and errno is set
	 to ENOMEM.

	 The strndup() function copies at most n characters from the string s1
	 always NUL terminating the copied string.

SEE ALSO
	 free(3), malloc(3)

HISTORY
	 The strdup() function first appeared in 4.4BSD.  The strndup() function
	 was added in FreeBSD 7.2.

BSD                            December 5, 2008                            BSD

*/
#include "libft.h"
/*
static size_t	ft_strlcpy(char *dst, const	char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && *src != '\0')
		{
			*dst = *src;
			dst++;
			src++;
			i++;
		}
		*dst = '\0';
	}	
	return (j);
}
*/
char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	str_size;

	str_size = ft_strlen(s1) + 1;
	s2 = (char *) malloc((str_size) * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, str_size);
	return (s2);
}

/*
int	main(void)
{	
	char *s2;

	s2 = ft_strdup("nice and sunny weather");
	free(s2);
}
*/
