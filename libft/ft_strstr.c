/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/06 13:03:18 by vpailhe           #+#    #+#             */
/*   Updated: 2015/06/06 13:14:31 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*s_new;

	i = 0;
	j = 0;
	s_new = (char *)s1;
	if (s2 == NULL || s2[j] == '\0')
		return (s_new);
	while (s1[i] != '\0')
	{
		k = i;
		while (s2[j] == s1[k] && s2[j] != '\0')
		{
			k++;
			j++;
		}
		if (s2[j] == '\0')
			return (s_new + i);
		j = 0;
		i++;
	}
	return (NULL);
}
