/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:59:05 by fbanzo-s          #+#    #+#             */
/*   Updated: 2025/01/24 19:59:05 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

void	ft_puthex_fd(int nbr, int fd, int *count, char *base)
{
	int		baselen;

	baselen = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd, count);
		nbr = -nbr;
	}
	if (nbr >= baselen)
	{
		ft_puthex_fd((nbr / baselen), fd, count, base);
		ft_putchar_fd(base[nbr % baselen], fd, count);
	}
	else
	{
		ft_putchar_fd(base[nbr], fd, count);
	}
}
