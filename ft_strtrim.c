/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:12:46 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/08 22:19:15 by pbiederm         ###   ########.fr       */
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
// #include <stdlib.h>

// static size_t	count_trimming_agent(char const *s1, char const *set)
// {
// 	size_t	trim_head;
    //type i;
	
// 	trim_head = 0;
§
// 	while (s1[trim_head] == set[i])
// 	{
// 		trim_head++;
// 	}
// 	printf("trim_head: %d", trim_head);
// 	return (trim_head);
// }

// static size_t	ft_strlenn(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (*(s + i) != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	// char	*s1_copy;
// 	size_t	index;

// 	// s1_copy = (char *)malloc((ft_strlenn(s1) - (2 * ft_strlenn(set)) + 1) * sizeof(char));
// 	// if (!(char *)malloc((ft_strlenn(s1) - (2 * ft_strlenn(set)) + 1) * sizeof(char)))
// 	// return (NULL);
// 	// s1_copy = (char *)s1;
// 	index = 0;
// 	while (s1[index] == *set)
// 	{
// 		index++;
// 	}
// 	printf("index: %d", index)
// 	// s1_copy[index] = '\0';
// 	// return (s1_copy);
// }

// int	main(void)
// {
// 	char	*strtrim;
// 	int		arg;
// 	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
// 	char s2[] = "lorem ipsum dolor sit amet";
// 	printf("test 1 string before: %s", s1);
// 	printf("test 1: %s params (s1, \" \")", ft_strtrim(s1, " "));
// 	printf("test 2 string before: %s", s2);
// 	printf("test 2: %s params (s2, \" \")", ft_strtrim(s1, "te"));
// }
