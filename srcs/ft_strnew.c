/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:24:48 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 13:44:51 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Description: Alloue (avec malloc(3)) et retourne une chaîne de caractère
** “fraiche” terminée par un ’\0’. Chaque caractère de la chaîne
** est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie NULL.
** Param. #1 La taille de la chaîne de caractères à allouer.
** Retour La chaîne de caractères allouée et initialisée à 0.
*/

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	str[size] = '\0';
	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
