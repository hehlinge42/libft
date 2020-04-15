/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:17:58 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/02 11:38:59 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
** Prototype void ft_putchar(char c);
** Description Affiche le caractère c sur la sortie standard.
** Param. #1 Le caractère à afficher.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
