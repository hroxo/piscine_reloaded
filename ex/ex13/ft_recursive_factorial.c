/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:15:06 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/08 15:55:48 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	output;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	output = nb;
	if (nb > 1)
		output *= ft_recursive_factorial(nb - 1);
	return (output);
}

// #include <stdio.h>
// #include <stdlib.h>
//
// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%i", ft_recursive_factorial(atoi(argv[1])));
// 	return (0);
// }
