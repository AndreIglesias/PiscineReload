/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:51:00 by ciglesia          #+#    #+#             */
/*   Updated: 2018/11/08 13:50:17 by ciglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		size;

	size = ft_strlen(src);
	str = (char*)malloc(sizeof(char) * (size + 1));
	size = 0;
	while (src[size])
	{
		str[size] = src[size];
		size++;
	}
	str[size] = '\0';
	return (str);
}
