/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:21:11 by klaurine          #+#    #+#             */
/*   Updated: 2019/05/11 22:18:42 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;

	if (nb > 0)
	{
		a = 1;
		while (a * a < nb)
			a++;
		if (a * a == nb)
			return (a);
	}
	return (0);
}
