/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:44:40 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/13 21:11:34 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name ft_split
// Prototype char **ft_split(char const *s, char c);
// Turn in files -
// Parameters s: The string to be split.
// c: The delimiter character.
// Return value The array of new strings resulting from the split.
// NULL if the allocation fails.
// External functs. malloc, free
// Description Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter.c The array must end
// with a NULL pointer.

#include <stdlib.h>
#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	word_count;
	size_t	i;
	size_t	in_word;

	i = 0;
	in_word = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			in_word = 1;
		if (in_word == 1 && (s[i] == c || s[i] == '\0'))
		{
			in_word = 0;
			word_count++;
		}	
	i++;
	}
	if (in_word == 1)
		word_count++;
	return (word_count);
}

static size_t del(char const *s,char c, size_t word_count)
{
	// find delimiter in string s
}

static size_t	word_start(s, c, size_t word_count);		
{
	int	word_start;
	
	// words start with delimiter
	return (word_start);
}
len = word_len(s, c, word_count);
{
	
}
char	**ft_split(char const *s, char c)
{
	size_t	w_count;
	char	**adr_arr;
	size_t	i;
	size_t	start;
	size_t	letter_count;

	i = 0;
	w_count = word_count(s, c);
	adr_arr = (char **)malloc((w_count + 1) * sizeof(char *));
	if (!adr_arr)
		return (NULL);
		
	i = 0;
	in_word = 0;
	while (w_count--)
	{
		start = word_start(s, c, w_count);		
		len = word_len(s, c, w_count);
		adr_arr[i] = ft_substr(s, start, letter_count);
		i++;
	}
return (adr_arr)
}
int main(void)
{
	printf("word_count: %zu\n",word_count("one_ring_to______rule_them_all_", '_'));
	return(0);
}