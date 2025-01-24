/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:20:19 by fbanzo-s          #+#    #+#             */
/*   Updated: 2025/01/24 20:47:52 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *count)
{
	char	c;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd, count);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
			(*count)++;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd, count);
		}
		c = (n % 10) + '0';
		write(fd, &c, 1);
		(*count)++;
	}
}

void	ft_putnbru_fd(int n, int fd, int *count)
{
	char	c;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd, count);
	else
	{
		if (n < 0)
			n = -n;
		if (n >= 10)
		{
			ft_putnbru_fd(n / 10, fd, count);
		}
		c = (n % 10) + '0';
		write(fd, &c, 1);
		(*count)++;
	}
}
