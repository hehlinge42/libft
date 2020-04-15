/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:21:21 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 13:34:50 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Description Prend en paramètre l’adresse d’une chaîne de caractères qui
** doit être libérée avec free(3) et son pointeur mis à NULL.
** Param. #1 L’adresse de la chaîne de caractère dont il faut libérer
** la mémoire et mettre le pointeur à NULL.
*/

void	ft_strdel(char **as)
{
	if (!(as))
		return ;
	free(*as);
	*as = NULL;
}
