/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:22:04 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 14:21:58 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description Applique la fonction f à chaque caractère de la chaîne de
** caractères passée en paramètre. Chaque caractère est passé
** par adresse à la fonction f afin de pouvoir être modifié si
** nécessaire.
** Param. #1 La chaîne de caractères sur laquelle itérer.
** Param. #2 La fonction à appeler sur chaque caractère de s.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(s + i);
}
