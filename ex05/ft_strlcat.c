/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:06:22 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/03 14:14:33 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	temp;

	temp = 0;
	while (*str != '\0')
	{
		str++;
		temp++;
	}
	return (temp);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	c;

	n = ft_strlen(dest);
	c = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (src[c] != '\0' && c + 1 < size)
	{
		dest[n] = '\0';
		n++;
		c++;
	}
	dest[n] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[c]));
}
