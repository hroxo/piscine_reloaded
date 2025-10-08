/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:15:05 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/08 09:19:05 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	size_t	i;
	char	*output;

	len = ft_strlen(src);
	output = malloc(len + 1);
	if (!output)
		return (NULL);
	while (src[i])
	{
		output[i] = src[i];
		i++;
	}
	src[i] = 0;
	return (output);
}
