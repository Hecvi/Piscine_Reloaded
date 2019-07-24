/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:25:49 by klaurine          #+#    #+#             */
/*   Updated: 2019/06/28 16:11:16 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	vivod(char *filename)
{
	int		file;
	char	tekst;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &tekst, 1))
		write(1, &tekst, 1);
	close(file);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		write(2, "File name missing.\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	else
		vivod(av[1]);
	return (0);
}
