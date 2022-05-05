/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:22:47 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/04 16:46:17 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <string.h>
#include <stdio.h>
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char				*t1;
	unsigned char				*t2;
	unsigned int				i;
	unsigned int				m;

	m = (unsigned int) n;
	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while ((*(t1 + i) != '\0' || *(t2 + i) != '\0') && (i < m))
	{
		if (*(t1 + i) > *(t2 + i))
			return (1);
		if (*(t1 + i) < *(t2 + i))
			return (-1);
		i++;
	}
	return (0);
}

/*
int main()
{
// 	[fail]: your strncmp does not cast in unsigned char the diff
// [fail]: your strncmp does not work with non ascii chars
	ft_strncmp("1234", "1235", -1)

	printf( "strncmp: %d\n", strncmp("ccccbbb", "aaab", 4*sizeof(char)));
	printf( "ft_strncmp: %d\n", ft_strncmp("ccccbbb", "aaab", 4*sizeof(char)));
	
	printf( "strncmp: %d\n", strncmp("ccccbbb", "aaab", 4*sizeof(char)));
	printf( "ft_strncmp: %d\n", ft_strncmp("ccccbbb", "aaab", 4*sizeof(char)));
}
*/
