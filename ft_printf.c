/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:04:58 by fbanzo-s          #+#    #+#             */
/*   Updated: 2025/01/23 19:04:58 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(char type, va_list args, int *count)
{
	if (type == 'c')
		ft_putchar_fd(va_arg(args, int), 1, count);
	else if (type == 's')
		ft_putstr_fd(va_arg(args, char *), 1, count);
	else if (type == 'd' || type == 'i')
		ft_putnbr_fd(va_arg(args, int), 1, count);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(*str, args, &count);
		}
		str++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	ft_printf("Hola %d test %c test2", 20, 'Z');
	return (0);
}
