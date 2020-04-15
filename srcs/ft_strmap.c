/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:23:37 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 13:43:15 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description Applique la fonction f à chaque caractère de la chaîne de
** caractères passée en paramètre pour créer une nouvelle chaîne
** “fraiche” (avec malloc(3)) résultant des applications successives de f.
** Param. #1 La chaîne de caractères sur laquelle itérer.
** Param. #2 La fonction à appeler sur chaque caractère de s.
** Retour La chaîne “fraiche” résultant des applications successives de f.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*res;

	i = -1;
	if (!s)
		return (NULL);
	while (s[++i])
		;
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	res[i] = '\0';
	i = -1;
	while (s[++i])
		res[i] = f(s[i]);
	return (res);
}
