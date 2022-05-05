/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:35:40 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/05 17:55:09 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name ft_strjoin
// Prototype char *ft_strjoin(char const *s1, char const *s2);
// Turn in files -
// Parameters s1: The prefix string.
// s2: The suffix string.
// Return value The new string.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.

#include <stdlib.h>

static size_t	ft_strlenn(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s3;
	int				incrementator[2];

	if (!(malloc(strlenn(s1) + strlenn(s2) + 1)))
		return (NULL);
	s3 = (char *)(malloc(strlenn(s1) + strlenn(s2) + 1));
	incrementator[0] = 0;
	incrementator[1] = 1;
	while (incrementator[0] < strlenn(s1))
	{
		s3[incrementator[0]] = s1[incrementator[0]];
		incrementator[0]++;
	}
	while (incrementator[1] < strlenn(s2))
	{
		s3[incrementator[0]] = s1[incrementator[1]];
		incrementator[0]++;
		incrementator[1]++;
	}
		s3[incrementator[0]] = '\0';
	return (s3);
}