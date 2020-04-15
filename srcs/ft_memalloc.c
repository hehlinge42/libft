/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:38:36 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/02 10:55:50 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* 
** Description Alloue (avec malloc(3)) et retourne une zone de mémoire
** “fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation
** échoue, la fonction renvoie NULL.
** Param. #1 La taille de la zone de mémoire à allouer.
** Retour: La zone de mémoire allouée.
*/

void	*ft_memalloc(size_t size)
{
	void	*res;

	if (!(res = (char *)malloc(sizeof(char) * (size))))
		return (NULL);
	ft_bzero(res, size);
	return (res);
}
