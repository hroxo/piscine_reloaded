/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:56:32 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/07 13:01:26 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int a = 3;
	int b = 5;

	printf("Antes do swap\na %i b %i\n", a, b);
	ft_swap(&a, &b);
	printf("Depois do swap\na %i b %i\n", a, b);
	return (0);
}
*/
