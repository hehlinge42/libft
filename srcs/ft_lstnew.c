/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:36:44 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/03 11:01:19 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description Alloue (avec malloc(3)) et retourne un maillon “frais”. Les
** champs content et content_size du nouveau maillon sont
** initialisés par copie des paramètres de la fonction. Si le paramètre
** content est nul, le champs content est initialisé à
** NULL et le champs content_size est initialisé à 0 quelque
** soit la valeur du paramètre content_size. Le champ next
** est initialisé à NULL. Si l’allocation échoue, la fonction renvoie
** NULL.
** Param. #1 Le contenu à ajouter au nouveau maillon.
** Param. #2 La taille du contenu à ajouter au nouveau maillon.
** Retour Le nouveau maillon.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_elem;

	if (!(new_elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new_elem->content = NULL;
		new_elem->content_size = 0;
	}
	else
	{
		if (!(new_elem->content = (void *)ft_memalloc(sizeof(void)
			* (content_size + 1))))
			return (NULL);
		ft_memcpy(new_elem->content, content, content_size);
		new_elem->content_size = content_size;
	}
	new_elem->next = NULL;
	return (new_elem);
}
