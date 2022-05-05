/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:35:57 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/05 16:06:05 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libc.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*point_to_calloc;
	size_t	increment;

	increment = 0;
	if (malloc((count * size)) != 0)
		point_to_calloc = malloc((count * size));
	else if (malloc(count * size) == 0)
		return (NULL);
	while (increment < count && (size != 0))
	{
			point_to_calloc[increment] = 0;
			increment++;
	}
	return (point_to_calloc);
}
