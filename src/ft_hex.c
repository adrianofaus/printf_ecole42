/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaustin <afaustin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:57:20 by afaustin          #+#    #+#             */
/*   Updated: 2021/10/19 16:57:21 by afaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int num, const char *type)
{
	char			*base;
	char			new_num;
	static int		c;

	base = "0123456789abcdef";
	c = 0;
	if (num >= 16)
		ft_hex(num / 16, type);
	if (*type == 'x')
		new_num = base[num % 16];
	else if (*type == 'X')
	{
		if ((base[num % 16] >= 'A' && base[num % 16] <= 'Z') || \
		(base[num % 16] >= 'a' && base[num % 16] <= 'z'))
			new_num = ((base[num % 16]) - 32);
		else
			new_num = base[num % 16];
	}
	write(1, &new_num, 1);
	c++;
	return (c);
}
