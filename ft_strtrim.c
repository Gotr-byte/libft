/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:48:51 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/13 15:50:39 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name ft_strtrim
// Prototype char *ft_strtrim(char const *s1, char const *set);
// Turn in files -
// Parameters s1: The string to be trimmed.
// set: The reference set of characters to trim.
// Return value The trimmed string.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.

#include "libft.h"

static size_t	count_prefix(const char *s1, const char *set)
{
	size_t	trim_head;
	size_t	i;

	trim_head = 0;
	i = 0;
	while (set[i] != '\0' && s1[trim_head] != '\0')
	{
		while (s1[trim_head] == set[i])
		{
		trim_head++;
		i = 0;
		}
	i++;
	}
	return (trim_head);
}

static size_t	count_suffix(const char *s1, const char *set)
{
	size_t	trim_tail;
	size_t	i;

	trim_tail = 0;
	i = 0;
	while (set[i] != '\0')
	{
		while (s1[ft_strlen(s1) - 1 - trim_tail] == set[i])
		{
		trim_tail++;
		i = 0;
		}
	i++;
	}
	return (trim_tail);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	size_t	pref;
	size_t	suff;

	suff = 0;
	pref = count_prefix(s1, set);
	if (pref != ft_strlen (s1))
		suff = count_suffix(s1, set);
	trim_str = ft_substr(s1, pref, ft_strlen (s1) - suff - pref);
	return (trim_str);
}

// int	main(void)
// {
// 	char	*trim_str;

// 	trim_str = ft_strtrim ("bdaaaazaaaaabddda", "bda");
// 	printf ("trim_str: %s", trim_str);
// 	return (0);
// }
