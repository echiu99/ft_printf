/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:54:00 by echiu             #+#    #+#             */
/*   Updated: 2023/11/21 17:06:19 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
int		ft_strlen(char *str);
int		ft_conman(const char str, va_list ptr);
int		ft_putchar(char c);
int		ft_putstr(char *c);
int		ft_putptr(unsigned long long str);
int		ft_putnbr(int n);
int		ft_putun_int(unsigned int n);
int		ft_puthexlo(unsigned int str);
int		ft_puthexup(unsigned int str);
int		ft_hex_len(unsigned int n);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);

#endif
