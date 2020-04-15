/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:19:02 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/02 11:43:19 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Description Ecrit l’entier n sur le descripteur de fichier fd.
** Param. #1 L’entier à écrire.
** Param. #2 Le descripteur de fichier.
*/

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;

	if (fd >= 0)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			nbr = -n;
		}
		else
			nbr = n;
		if (nbr < 10)
			ft_putchar_fd(nbr + '0', fd);
		else
		{
			ft_putnbr_fd(nbr / 10, fd);
			ft_putnbr_fd(nbr % 10, fd);
		}
	}
}
