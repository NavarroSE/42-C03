/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:54:44 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/31 16:34:12 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	n;

	n = 0;
	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		while (str[c + n] == to_find[n] && str[c + n] != '\0')
		{
			if (to_find[n + 1] == '\0')
				return (&str[c]);
			n++;
		}
		c++;
	}
	return (0);
}
