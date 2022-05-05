/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:47:37 by pbiederm          #+#    #+#             */
/*   Updated: 2022/05/05 16:07:40 by pbiederm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c = c + ('z' - 'Z');
	return (c);
}
/*
int main(void)
{
	int a;
	a = ft_tolower('B');
	printf("%c\n", a);
	
}
*/
