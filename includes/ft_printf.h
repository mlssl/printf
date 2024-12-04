/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaussel <mlaussel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:52:20 by mathildelau       #+#    #+#             */
/*   Updated: 2024/12/03 14:03:54 by mlaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c, int *len);
int		ft_putstr(char *str, int *len);
int		ft_putnbr_base(int nbr, char *base, int *len);
void	ft_unsigned(unsigned int n, int *len);
void	ft_pointer(unsigned long nbr, char *base, int *len);
void	ft_hexa(int nbr, char *base, int *len);

#endif
