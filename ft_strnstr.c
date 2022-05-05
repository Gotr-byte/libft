/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:31:55 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/04 18:50:50 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	count;
	char	*v1;

	i = 0;
	count = 0;
	if (!ft_strlenn(s2))
		return ((char *)s1);
	while (i < n && (s1[i] != '\0'))
	{
		while ((s1[i] == s2[count]) && (i < n) && (s1[i] != '\0'))
		{
			count++;
			i++;
			if (count == ft_strlenn(s2))
			{
				v1 = ((char *)s1 + i - ft_strlenn(s2));
				return (v1);
			}
		}
	count = 0;
	i++;
	}
	return (0);
}
