/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:39:16 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/02 17:21:58 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	c;

	n = 0;
	c = 0;
	while ((dest[n] != '\0') && (c < nb))
	{
		n++;
	}
	while ((src[c] != '\0') && (c < nb))
	{
		dest[n] = src[c];
		c++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
