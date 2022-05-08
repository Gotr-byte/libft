/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:35:40 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/06 11:07:29 by pbiederm         ###   ########.fr       */
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
// [fail]: your strjoin does not work with basic input
// [fail]: your strjoin does not allocate the memory
// [fail]: your strjoin does not work with overlap input
// [fail]: your strjoin does not set \0 to the end of the string
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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
	size_t			incrementator[2];

	if (!(malloc((ft_strlenn(s1)) + (ft_strlenn(s2)) + 1)))
		return (NULL);
	s3 = (char *)(malloc(ft_strlenn(s1) + ft_strlenn(s2) + 1));
	incrementator[0] = 0;
	incrementator[1] = 0;
	while (incrementator[0] < ft_strlenn(s1))
	{
		s3[incrementator[0]] = s1[incrementator[0]];
		incrementator[0]++;
	}
	while (incrementator[1] < ft_strlenn(s2))
	{
		s3[incrementator[0]] = s2[incrementator[1]];
		incrementator[0]++;
		incrementator[1]++;
	}
		s3[incrementator[0]] = '\0';
	return (s3);
}
/*
int	main(void)
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
	char	*strjoin;

	strjoin = ft_strjoin(s1, NULL);
	printf ("s1: %s \n", s1);
	printf ("s2: %s \n", s2);
	printf ("ft_strjoin(s1, s2): %s \n", strjoin);
	s1[0] = '\0';
	printf ("s1: %s \n", s1);
	printf ("s2: %s \n", s2);
	printf ("ft_strjoin(s1, s2): %s \n", strjoin);
}
*/
