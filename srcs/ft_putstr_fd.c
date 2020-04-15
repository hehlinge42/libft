/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:19:26 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/02 11:43:45 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Description Ecrit la chaîne s sur le descripteur de fichier fd.
** Param. #1 La chaîne de caractères à écrire.
** Param. #2 Le descripteur de fichier.
*/

void	ft_putstr_fd(char const *s, int fd)
{
	if (fd >= 0)
		write(fd, s, ft_strlen(s));
}
