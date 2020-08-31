/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:28:39 by ciglesia          #+#    #+#             */
/*   Updated: 2018/11/08 14:18:38 by ciglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	display(char *path)
{
	int		fd;
	char	buf[4097];
	int		ret;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return ;
	}
	ret = 1;
	while (ret)
	{
		ret = read(fd, buf, 4096);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return ;
	}
}
