/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:06:22 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/03 11:48:32 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	c;
	unsigned int	a;

	n = 0;
	c = 0;
	a = 0;
	while (src[n] != '\0')
	{
		n++;
		a++;
	}
	while ((dest[c] != '\0') && (c < size))
	{
		src[n] = dest[c];
		c++;
		n++;
		a++;
	}
	src[n] = '\0';
	return (a);
}
