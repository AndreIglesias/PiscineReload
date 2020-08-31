/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:16:37 by ciglesia          #+#    #+#             */
/*   Updated: 2018/11/08 15:04:00 by ciglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i <= 'z')
		ft_putchar(i++);
	return (0);
}
