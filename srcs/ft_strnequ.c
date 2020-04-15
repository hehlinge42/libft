/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:24:32 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 14:19:09 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description Compare lexicographiquement s1 et s2 jusqu’à n caractères
** maximum ou bien qu’un ’\0’ ait été rencontré. Si les deux
** chaînes sont égales, la fonction retourne 1, ou 0 sinon.
** Param. #1 La première des deux chaînes à comparer.
** Param. #2 La seconde des deux chaînes à comparer.
** Param. #3 Le nombre de caractères à comparer au maximum.
** Retour 1 ou 0 selon que les deux chaînes sont égales ou non.
*/

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (i == n || (!s1[i] && !s2[i]))
		return (1);
	return (0);
}
