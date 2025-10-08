/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:35:51 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/08 12:17:28 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# define FEW_ARGS "File name missing.\n"
# define MANY_ARGS "Too many arguments.\n"
# define READ_ERROR "Cannot read file.\n"

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

size_t	ft_strlen(char *src);
void	print_file(int fd);

#endif
