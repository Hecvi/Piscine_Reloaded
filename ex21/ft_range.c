/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 16:39:45 by klaurine          #+#    #+#             */
/*   Updated: 2019/05/11 22:25:45 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *dest;

	if (min >= max)
		return (NULL);
	else
	{
		dest = (int *)malloc(sizeof(int) * (max - min));
		if (dest == NULL)
			return (NULL);
		while (max >= min)
		{
			dest[max - min - 1] = max - 1;
			max--;
		}
		return (dest);
	}
}
