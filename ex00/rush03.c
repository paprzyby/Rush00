/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-la-g  <@student.42heilbronn.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:49:50 by rde-la-g          #+#    #+#             */
/*   Updated: 2023/10/21 16:28:49 by rde-la-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y)
{
	int	x2;
	int	y2;

	x2 = 1;
	y2 = 1;
	if (x < 1 || y < 1)
		write(1, "ERROR: invalid input", 21);
	while (y2 <= y)
	{
		while (x2 <= x)
		{
			if ((y2 == 1 || y2 == y) && x2 == 1)
				ft_putchar('A');
			else if ((y2 == 1 || y2 == y) && x2 == x)
				ft_putchar('C');
			else if (y2 == 1 || y2 == y || x2 == 1 || x2 == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			x2++;
		}
		ft_putchar('\n');
		x2 = 1;
		y2++;
	}
}
