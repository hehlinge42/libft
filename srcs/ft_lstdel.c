/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:32:19 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 12:32:32 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Description Prend en paramètre l’adresse d’un pointeur sur un maillon et
** libère la mémoire de ce maillon et celle de tous ses successeurs
** l’un après l’autre avec del et free(3). Pour terminer,
** le pointeur sur le premier maillon maintenant libéré doit être
** mis à NULL (de manière similaire à la fonction ft_memdel de
** la partie obligatoire).
** Param. #1 L’adresse d’un pointeur sur le premier maillon d’une liste à
** libérer.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(alst, del);
}
