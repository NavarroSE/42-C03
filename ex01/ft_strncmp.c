/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:57:13 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/03 13:51:52 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	int				ret;

	c = 0;
	ret = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		n--;
		while ((s1[c] != '\0' || s2[c] != '\0') && (c < n) && (s1[c] == s2[c]))
		{
			c++;
		}
		ret = s1[c] - s2[c];
		return (ret);
	}
}
