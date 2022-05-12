/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaustin <afaustin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:57:52 by afaustin          #+#    #+#             */
/*   Updated: 2021/10/19 16:57:53 by afaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa(long int n);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		ft_decimal(unsigned long int num);
size_t	ft_string(const char *c);
size_t	ft_char(const int c);
int		ft_hex(unsigned int num, const char *type);
int		ft_pointer(unsigned long int num);
int		ft_printf(const char *format, ...);

#endif
