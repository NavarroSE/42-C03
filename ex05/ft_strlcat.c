/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:06:22 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/31 16:34:16 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				n;
	unsigned int	c;
	unsigned int	a;

	n = 0;
	c = 0;
	a = 0;
	while (dest[n] != '\0')
	{
		n++;
		a++;
	}
	while ((src[c] != '\0') && (c < size))
	{
		dest[n] = src[c];
		c++;
		n++;
		a++;
	}
	dest[n] = '\0';
	return (a);
}
