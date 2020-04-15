/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:18:29 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/02 11:42:40 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Description Ecrit la chaîne s sur le descripteur de fichier fd suivi d’un
** ’\n’.
** Param. #1 La chaîne de caractères à écrire.
** Param. #2 Le descripteur de fichier.
*/

void	ft_putendl_fd(const char *s, int fd)
{
	int i;

	i = -1;
	if (fd >= 0)
	{
		while (s[++i])
			ft_putchar_fd(s[i], fd);
		ft_putchar_fd('\n', fd);
	}
}
