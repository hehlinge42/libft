/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:32:43 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 12:32:53 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description Prend en paramètre l’adresse d’un pointeur sur un maillon et
** libère la mémoire du contenu de ce maillon avec la fonction
** del passée en paramètre puis libère la mémoire du maillon
** en lui même avec free(3). La mémoire du champ next ne
** doit en aucun cas être libérée. Pour terminer, le pointeur sur
** le maillon maintenant libéré doit être mis à NULL (de manière
** similaire à la fonction ft_memdel de la partie obligatoire).
** Param. #1 L’adresse d’un pointeur sur le maillon à libérer.
*/

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}
