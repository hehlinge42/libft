/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:25:10 by hehlinge          #+#    #+#             */
/*   Updated: 2019/04/01 13:45:09 by hehlinge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c >= 0 && c <= 128)
	{
		while (*(s + i))
			i++;
		if (c == '\0')
			return ((char *)s + i);
		while (i >= 0)
		{
			if (*(s + i) == c)
				return ((char *)s + i);
			i--;
		}
	}
	return (NULL);
}
