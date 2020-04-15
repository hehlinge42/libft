/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:26:06 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 14:27:05 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un
** tronçon de la chaîne de caractères passée en paramètre. Le
** tronçon commence à l’index start et a pour longueur len. Si
** start et len ne désignent pas un tronçon de chaîne valide,
** le comportement est indéterminé. Si l’allocation échoue, la
** fonction renvoie NULL.
** Param. #1 La chaîne de caractères dans laquelle chercher le tronçon à
** copier.
** Param. #2 L’index dans la chaîne de caractères où débute le tronçon à
** copier.
** Param. #3 La longueur du tronçon à copier.
** Retour Le tronçon.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if (!(res = ft_strnew(len)))
		return (NULL);
	return (ft_strncpy(res, s + start, len));
}
