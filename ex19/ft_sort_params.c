/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:06:05 by klaurine          #+#    #+#             */
/*   Updated: 2019/04/09 21:00:55 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putchar(char c);

void	ft_pechat(char *av)
{
	int i;

	i = 0;
	while (av[i])
	{
		ft_putchar(av[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	int		min;
	char	*obmen;

	i = 1;
	j = 1;
	min = (ac - 1);
	while (i <= (ac - 1))
	{
		while (j <= (ac - 1))
		{
			if (ft_strcmp(av[j], av[min]) <= 0)
				min = j;
			j++;
		}
		obmen = av[min];
		av[min] = av[i];
		av[i] = obmen;
		ft_pechat(av[i]);
		j = i + 1;
		i++;
		min = (ac - 1);
	}
	return (0);
}
