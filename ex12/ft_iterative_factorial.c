/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:50:20 by ciglesia          #+#    #+#             */
/*   Updated: 2018/11/08 13:29:39 by ciglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int accum;

	accum = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb >= 1)
	{
		accum *= nb;
		nb--;
	}
	return (accum);
}
