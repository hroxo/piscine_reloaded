/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:21:38 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/08 09:28:02 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*output;
	int	i;

	if (min >= max)
		return (NULL);
	output = malloc(sizeof(int) * (max - min));
	if (!output)
		return (NULL);
	i = 0;
	while (min < max)
	{
		output[i] = min;
		min++;
		i++;
	}
	return (output);
}

/*
#include <printf.h>

int	main()
{
	int min = 10;
	int max = 15;
	int *list = ft_range(min, max);
	if (!list)
	{
		free(list);
		return (1);
	}
	for (int i = 0; i < (max - min); i++)
		printf("%i ", list[i]);
	printf("\n");
	free(list);
	return (0);
}
*/
