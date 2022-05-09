/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:07:58 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/09 15:06:59 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name ft_substr
Prototype char *ft_substr(char const *s, unsigned int start,
size_t len);
Turn in files -
Parameters s: The string from which to create the substring.
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring.
Return value The substring.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

[fail]: your substr does not work with valid input
[fail]: your substr does not work with valid input
[fail]: your substr did not allocate the good size so the \0 test may be false
[fail]: your substr does not set \0 to the end of the string
[fail]: your substr does not work for a whole string
[fail]: your substr does not work when start >= ft_strlen(s)
*/
// size_t	ft_strlenn(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (*(s + i) != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// // }
// #include "libft.h"



// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*the_substring;
// 	size_t	incrementation;
// // if start is over the string lenght of source string 
// 	if (start >= ft_strlen(s))
// 		return (NULL);
// 	if ((!malloc((len + 1) * sizeof(char))))
// 		return (NULL);
// 	the_substring = (char *)malloc((len + 1) * sizeof(char));
// 	incrementation = 0;
// // below should handle going over the string length but doesnt
// 	while ((incrementation < len) && (*(s + start + incrementation) != '\0'))
// 	{
// 		*(the_substring + incrementation) = *(s + start + incrementation);
// 		incrementation++;
// 	}
// 	*(the_substring + len) = '\0';
// 	return (the_substring);
// }
// /*
// int main(void)
// {
// 	char	str[] = "lorem ipsum dolor sit amet";

// 	printf("original string:    %s\n", str);
// 	printf("substring:          %s\n", ft_substr(str, 400, 20));
// }

