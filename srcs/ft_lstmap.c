/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:33:27 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 16:09:51 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description Parcourt la liste lst en appliquant à chaque maillon la fonction
** f et crée une nouvelle liste “fraiche” avec malloc(3) résultant
** des applications successives. Si une allocation échoue,
** la fonction renvoie NULL.
** Param. #1 Pointeur sur le premier maillon d’une liste.
** Param. #2 L’adresse d’une fonction à appliquer à chaque maillon de la
** liste pour créer une nouvelle liste.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*elem;

	if (lst)
	{
		if (!(elem = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		elem = f(lst);
		lst = lst->next;
		elem->next = ft_lstmap(lst, f);
		return (elem);
	}
	return (NULL);
}
