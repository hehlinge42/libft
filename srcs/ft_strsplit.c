/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:25:29 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/02 14:46:18 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description Alloue (avec malloc(3)) et retourne un tableau de chaînes de
** caractères “fraiches” (toutes terminées par un ’\0’, le tableau
** également donc) résultant de la découpe de s selon le caractère
** c. Si l’allocation echoue, la fonction retourne NULL. Exemple :
** ft_strsplit("*salut*les***etudiants*", ’*’) renvoie
** le tableau ["salut", "les", "etudiants"].
** Param. #1 La chaîne de caractères à découper.
** Param. #2 Le caractère selon lequel découper la chaîne.
** Retour Le tableau de chaînes de caractères “fraiches” résultant de la
** découpe.
*/

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		count;
	int		i;
	int		beg;
	int		end;

	count = ft_word_count(s, c);
	if (!s || !(res = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	res[count] = NULL;
	i = -1;
	end = -1;
	while (++i < count)
	{
		beg = end;
		while (s[++beg] && s[beg] == c)
			;
		end = beg - 1;
		while (s[++end] && s[end] != c)
			;
		res[i] = ft_strnew(end - beg);
		ft_strncpy(res[i], s + beg, (size_t)end - beg);
	}
	return (res);
}
