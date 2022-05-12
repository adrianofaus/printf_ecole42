/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaustin <afaustin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:57:13 by afaustin          #+#    #+#             */
/*   Updated: 2021/10/19 16:57:14 by afaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal(unsigned long int num)
{
	char	*res;
	int		counter;

	res = ft_itoa(num);
	ft_putstr_fd(res, 1);
	counter = ft_strlen(res);
	free(res);
	return (counter);
}
