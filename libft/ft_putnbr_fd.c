/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:29:41 by ikovalen          #+#    #+#             */
/*   Updated: 2018/10/26 13:30:56 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < -9 || nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	if (nb < 0)
	{
		if (nb >= -9)
			ft_putchar_fd('-', fd);
		ft_putchar_fd('0' - nb % 10, fd);
	}
	else
		ft_putchar_fd(nb % 10 + 48, fd);
}
