/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:21:47 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 14:16:24 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description Compare lexicographiquement s1 et s2. Si les deux chaînes
** sont égales, la fonction retourne 1, ou 0 sinon.
** Param. #1 La première des deux chaînes à comparer.
** Param. #2 La seconde des deux chaînes à comparer.
** Retour 1 ou 0 selon que les deux chaînes sont égales ou non.
*/

int	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = -1;
	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (s1[++i] && s2[i])
		if (s1[i] != s2[i])
			return (0);
	if (!(s1[i]) && !(s2[i]))
		return (1);
	return (0);
}
