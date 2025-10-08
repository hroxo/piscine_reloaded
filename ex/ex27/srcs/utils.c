/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:37:20 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/08 12:22:39 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/util.h"
#include <unistd.h>

size_t	ft_strlen(char *src)
{
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

void	print_file(int fd)
{
	int		f_r;
	char	c;

	f_r = read(fd, &c, 1);
	while (f_r > 0)
	{
		write(1, &c, 1);
		f_r = read(fd, &c, 1);
	}
}
