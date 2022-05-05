/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:30:21 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/05 16:06:30 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	if ((*src_ptr == 0) && (*dst_ptr == 0))
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(dst_ptr + i) = *(src_ptr + i);
		i++;
	}
	return (dst);
}

// int main(void)
// {
// 	char	*mem;
// 	char	*meme;
// 	char	i;

// 	i = 'a';
// 	mem = malloc(20);
// 	meme = malloc(20);
// 	printf("memcpy		%s \n", memcpy(&i, 0, 2));
// 	printf("ft_memcpy	%s \n", ft_memcpy(&i, 0, 2));
// 	free (mem);
// 	free (meme);
// }
