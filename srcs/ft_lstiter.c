/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:33:02 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 12:35:31 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description Parcourt la liste lst en appliquant à chaque maillon la
** fonction f.
** Param. #1 Pointeur sur le premier maillon d’une liste.
** Param. #2 L’adresse d’une fonction à laquelle appliquer chaque maillon
** de la liste.
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
