/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:42:12 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/02 09:06:27 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wh_space(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] == ' ' || str[i] == '	' || str[i] == '\t' \
	|| str[i] == '\n' || str[i] == '\v' \
	|| str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	integer;
	int	minus;
	int	flag;

	i = ft_wh_space(str);
	integer = 0;
	minus = 1;
	flag = 0;
	if (str[i] == '-' || str[i] == '+')
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
	if (str[i] == '-')
		minus = -1; i++;
	if (str[i] == '+')
		i++;
	while (((*(str + i)) >= 48) && ((*(str + i)) <= 57))
	{
		integer = 10 * integer + (int)(*(str + i) - 48);
		flag = 1;
		i++;
	}
	if (flag != 0)
		return (minus * integer);
	return (0);
}
/*
int    main(void)
{
	char* test_1 = "    		-1++0 feqwff";

	printf("ft_atoi(%s): %d\n", test_1, ft_atoi(test_1)) ;
	printf("atoi(%s): %d\n", test_1, atoi(test_1)) ;
}
*/
