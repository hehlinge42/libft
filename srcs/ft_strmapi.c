/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:23:49 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 13:40:27 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description Applique la fonction f à chaque caractère de la chaîne de
** caractères passée en paramètre en précisant son index pour
** créer une nouvelle chaîne “fraiche” (avec malloc(3)) résultant
** des applications successives de f.
** Param. #1 La chaîne de caractères sur laquelle itérer.
** Param. #2 La fonction à appeler sur chaque caractère de s en précisant
** son index.
** Retour La chaîne “fraiche” résultant des applications successives de f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	res[i] = '\0';
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
