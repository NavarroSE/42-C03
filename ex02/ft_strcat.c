/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:12:23 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/31 16:33:58 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	c;

	n = 0;
	c = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[c] != '\0')
	{
		dest[n] = src[c];
		c++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
