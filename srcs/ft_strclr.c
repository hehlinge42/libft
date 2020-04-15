/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:20:37 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 13:34:12 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description Assigne la valeur ’\0’ à tous les caractères de la chaîne
** passée en paramètre.
** Param. #1 La chaîne de caractères à clearer.
*/

void	ft_strclr(char *s)
{
	int i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		s[i] = '\0';
}
