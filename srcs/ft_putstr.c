/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:19:15 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/02 11:42:16 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Prototype void ft_putstr(char const *s);
** Description Affiche la chaîne s sur la sortie standard.
** Param. #1 La chaîne de caractères à afficher.
*/

void	ft_putstr(const char *s)
{
	write(1, s, ft_strlen(s));
}
