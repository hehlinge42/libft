/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:29:44 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/02 11:34:28 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Description Affiche la chaîne s sur la sortie standard suivi d’un ’\n’.
** Param. #1 La chaîne de caractères à afficher.
*/

void	ft_putendl(const char *s)
{
	int i;

	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
	ft_putchar('\n');
}
