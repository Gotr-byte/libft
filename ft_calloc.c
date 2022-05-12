/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:35:57 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/12 10:32:12 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*point_to_calloc;
	size_t	t;

	if (count >= SIZE_MAX)
		return (NULL);
	if (size >= SIZE_MAX)
		return (NULL);
	t = count * size;
	if (t >= SIZE_MAX)
		return (NULL);
	point_to_calloc = malloc(t);
	if (!point_to_calloc)
		return (NULL);
	ft_bzero(point_to_calloc, t);
	return (point_to_calloc);
}
