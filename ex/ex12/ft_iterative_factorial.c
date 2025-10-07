/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:06:06 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/07 13:13:36 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	output;

	output = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		output *= nb;
		nb--;
	}
	return (output);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%i", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
*/
