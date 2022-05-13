/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:34:05 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/13 12:52:59 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*the_substring;
	size_t	incrementation;

	if (start >= ft_strlen(s))
	{
		the_substring = (char *)malloc((1) * sizeof(char));
		the_substring[0] = '\0';
		return (the_substring);
	}
	else if (len - start >= ft_strlen(s))
		the_substring = (char *)malloc(ft_strlen(s) - start + 1);
	else
		the_substring = (char *)malloc((len + 1) * sizeof(char));
	if (!the_substring)
		return (NULL);
	incrementation = 0;
	while ((incrementation < len) && (s[start + incrementation] != '\0'))
	{
		the_substring[incrementation] = s[start + incrementation];
		incrementation++;
		if (s[incrementation + start] == '\0')
			break ;
	}
	the_substring[incrementation] = '\0';
	return (the_substring);
}

// int main()
// {
//   //char *ptr;
//  // ptr = (char*)malloc(42000);
//  // ptr = "12345";
//   printf("substr: %s", ft_substr("azzzzzzzzzzzzabbababbbbababdbad", 0, 12));
//   //free(ptr);
//   return(0);
//   }
