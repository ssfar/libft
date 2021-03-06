/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:03:01 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/19 21:54:16 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	while (*s2 && n-- > 0)
		s1[i++] = *s2++;
	s1[i] = '\0';
	return (s1);
}
