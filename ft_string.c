/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaustin <afaustin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:57:59 by afaustin          #+#    #+#             */
/*   Updated: 2021/10/19 16:58:00 by afaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_string(const char *c)
{
	size_t	a;
	size_t	b;

	if (!c)
		return (ft_string("(null)"));
	a = 0;
	b = ft_strlen(c);
	while (a < b)
	{
		write (1, c++, 1);
		a++;
	}
	return (a);
}
