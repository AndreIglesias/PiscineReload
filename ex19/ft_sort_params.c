/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:36:04 by ciglesia          #+#    #+#             */
/*   Updated: 2018/11/08 14:38:53 by ciglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print(char **tab, int size)
{
	int i;

	i = 1;
	while (i < size)
		ft_putstr(tab[i++]);
}

void	sort(char **tab, int size)
{
	int		sorted;
	int		j;
	char	*str;

	sorted = 1;
	while (sorted)
	{
		sorted = 0;
		j = 0;
		while (j < size - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				str = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = str;
				sorted = 1;
			}
			j++;
		}
	}
	ft_print(tab, size);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		sort(av, ac);
	}
	return (0);
}
