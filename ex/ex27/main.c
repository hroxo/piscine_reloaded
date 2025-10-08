/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:32:25 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/08 12:18:47 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/util.h"

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc > 2)
			write(1, MANY_ARGS, ft_strlen(MANY_ARGS));
		else
			write(1, FEW_ARGS, ft_strlen(FEW_ARGS));
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(1, READ_ERROR, ft_strlen(READ_ERROR));
		return (3);
	}
	print_file(fd);
	close(fd);
	return (0);
}
