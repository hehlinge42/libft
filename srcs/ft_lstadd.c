/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:31:47 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 12:31:58 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description Ajoute l’élément new en tête de la liste.
** Param. #1 L’adresse d’un pointeur sur le premier maillon d’une liste.
** Param. #2 Le maillon à ajouter en tête de cette liste.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
