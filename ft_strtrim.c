/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:12:46 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/09 18:08:20 by pbiederm         ###   ########.fr       */
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

// works with space, needs to work with strings
// #include <stdio.h>
// #include <stdlib.h>

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

// static size_t	count_prefix(const char *s1, const char *set)
// {
// 	size_t	trim_head;
// 	size_t	i;

// 	trim_head = 0;
// 	i = 0;
// 	while (set[i] != '\0')
// 	{
// 		while (s1[trim_head] == set[i])
// 		{
// 		trim_head++;
// 		}
// 	i++;
// 	if(s1[trim_head] != set[i])
// 		break;
// 	}
// 	return (trim_head);
// }

// static size_t    count_tail(const char *s1, const char *set, size_t l)
// {
//     size_t    trim_tail;
//     size_t    i;

//     trim_tail = 0;
//     i = 0;
//     l = l - 1;
//     while ( l > 0)
//     {
//         while (s1[l-trim_tail] == set[i])
//         {
//         trim_tail++;
//         }
//     i++;
// 	l--;
//     if (s1[l-trim_tail] != set[i])
//         break;
//     }
//     return (trim_tail);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	len;
// 	size_t	prefix;
// 	size_t	suffix;
// 	char	*string_trim;
// 	size_t	i;

// 	i = 0;
// 	len = ft_strlenn(s1);
// 	prefix = count_prefix(s1, set);
// 	if (!(prefix == len))
// 		suffix = count_tail(s1, set, len);
// 	else
// 		suffix = 0;
// 	string_trim = (char *)malloc(ft_strlenn(s1) - suffix - prefix + 1);
// 	if (!((char *)malloc(ft_strlenn(s1) - suffix - prefix + 1)))
// 		return (NULL);
// 	len = ft_strlenn(s1) - suffix - prefix;
// 	// printf ("suffix: %lu\n", suffix);
// 	// printf ("prefix: %lu\n", prefix);
// 	// printf ("len s1: %lu\n", len);
// 	while (i < len)
// 	{
// 		string_trim[i] = s1[i + prefix];
// 		i++;
// 	}
// 	string_trim[i] = '\0';
// 	return (string_trim);
// }
/*
int	main(void)
{
	// char *s1 = "lorem \n ipsum \t dolor \n sit \t amet    ";
	char *s1 = "   lorem   "; // suffix: 3 prefix: 3 len: 12
	// char *s2 = "lorem ipsum dolor sit amet";

	printf("test 1:%s\n", s1);
	printf("test 1:%s\n", ft_strtrim(s1, " "));
	// printf("test 2 before:	%s\n", s2);
	// printf("test 2: 		%s\n", ft_strtrim(s2, "te"));
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

static size_t    ft_strlenn(const char *s)
{
    size_t    i;

    i = 0;
    while (*(s + i) != '\0')
    {
        i++;
    }
    return (i);
}

static size_t    count_prefix(const char *s1, const char *set)
{
    size_t    trim_head;
    size_t    i;
    size_t    j;

    trim_head = 0;
    i = 0;
    j = 0;
    while (set[j] != '\0')
    {
    i = 0;
        while (set[i] != '\0')
        {
        if(s1[j] == set[i])  
			{
            trim_head++;
			j++;
			i = 0;
			}
        i++;
        }
    if(s1[j] != set[i])
        break;
    }
    return (trim_head);
}

static size_t    count_tail(const char *s1, const char *set, size_t l)
{
    size_t    trim_tail;
    size_t    i;

    trim_tail = 0;
    i = 0;
    l = l - 1;
    while (l > 0)
    {
		i = 0;
        while (set[i] != '\0')
        {
        printf("index set trim tail: %lu\n", i);
		if (s1[l] == set[i])
			{
            trim_tail++;
			l--;
			i = 0;
			}
        i++;
		
        }
    if (s1[l] != set[i])
        break;
    }

    return (trim_tail);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t    len;
    size_t    prefix;
    size_t    suffix;
    char    *string_trim;
    size_t    i;

    i = 0;
    len = ft_strlenn(s1);
    prefix = count_prefix(s1, set);
    if (!(prefix == len))
        suffix = count_tail(s1, set, len);
    else
        suffix = 0;
    string_trim = (char *)malloc(ft_strlenn(s1) - suffix - prefix + 1);
    if (!((char *)malloc(ft_strlenn(s1) - suffix - prefix + 1)))
        return (NULL);
    len = ft_strlenn(s1) - suffix - prefix;
    printf ("suffix: %lu\n", suffix);
    printf ("prefix: %lu\n", prefix);
    printf ("len s1: %lu\n", len);
    // string_trim = ft_substr((char *)s1, (unsigned int)prefix, len)
    while (i < len)
    {
        string_trim[i] = s1[i + prefix];
        i++;
    }
    
    string_trim[i] = '\0';
    return (string_trim);
}

int    main(void)
{
  
    //char *s1 = "          ";
    // char *s1 = "lorem \n ipsum \t dolor \n sit \t amet    ";
    //char *s1 = "   lorem   "; // suffix: 3 prefix: 3 len: 12
    char *s2 = "etetettteeelorem ipsum dolor sit amtttttttttet";

    //printf("test 1:%s\n", s1);
    //printf("test 1:%s\n", ft_strtrim(s1, " "));
    printf("test 2:%s\n", s2);
    printf("test 2:%s\n", ft_strtrim(s2, "te"));
}
*/