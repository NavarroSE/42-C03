/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:57:13 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/31 16:33:53 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	c;
	int	ret;

	c = 0;
	ret = 0;
	while ((s1[c] != '\0' || s2[c] != '\0') && (ret == 0) && (c <= n))
	{
		if (s1[c] < s2[c])
			ret--;
		else if (s1[c] > s2[c])
			ret++;
		c++;
	}
	return (ret);
}
