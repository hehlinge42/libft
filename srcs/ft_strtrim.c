/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:26:19 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 13:53:33 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description Alloue (avec malloc(3)) et retourne une copie de la chaîne
** passée en paramètre sans les espaces blancs au debut et à la
** fin de cette chaîne. On considère comme espaces blancs les
** caractères ’ ’, ’\n’ et ’\t’. Si s ne contient pas d’espaces
** blancs au début ou à la fin, la fonction renvoie une copie de
** s. Si l’allocation echoue, la fonction renvoie NULL.
** Param. #1 La chaîne de caractères à trimmer.
** Retour La chaîne de caractère “fraiche” trimmée ou bien une copie
** de s sinon.
*/

char	*ft_strtrim(char const *s)
{
	int		i;
	size_t	count;
	char	*res;

	i = -1;
	count = 0;
	if (!s)
		return (NULL);
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		;
	while (s[++i])
		count++;
	while (--i > 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		count--;
	if (!(res = ft_strnew(count + 1)))
		return (NULL);
	return (ft_strncpy(res, s + i - count, count + 1));
}
