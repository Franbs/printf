/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:19:06 by fbanzo-s          #+#    #+#             */
/*   Updated: 2025/01/25 16:23:35 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *count)
{
	unsigned int	i;

	if (!s)
		s = "(null)";
	i = 0;
	while (s[i])
	{
		(*count)++;
		write(fd, &s[i], 1);
		i++;
	}
}
