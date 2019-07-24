/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:02:39 by klaurine          #+#    #+#             */
/*   Updated: 2019/04/10 19:29:27 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int schet;

	i = 0;
	schet = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			schet++;
		i++;
	}
	return (schet);
}