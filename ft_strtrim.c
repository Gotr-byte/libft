/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:48:51 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/12 15:35:23 by pbiederm         ###   ########.fr       */
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

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t    ft_strlen(const char *s)
{
    size_t    i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

static size_t    count_prefix(const char *s1, const char *set)
{
    size_t    trim_prefix;
    size_t    i;
    size_t    j;
    size_t    ret_count;
    
    ret_count = 0;
    trim_prefix = 0;
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while (set[j] != '\0')
        {
        if (set[j] == s1[i])
            trim_prefix++;
        if (set[j] != s1[i])
            ret_count++;
        if (ret_count == ft_strlen(set))
            return (trim_prefix);
        j++;
        }
    
        i++;
    }
    return (trim_prefix);
}

int main (void)
{
printf("count prefix: %zu", count_prefix("babbaabc", "ab")); 
return(0);
}
