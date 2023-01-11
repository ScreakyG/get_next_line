/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzale <fgonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:58:41 by fgonzale          #+#    #+#             */
/*   Updated: 2023/01/06 20:29:43 by fgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*find_next_line(char *saved, int fd)
{
	int		readed_bytes;
	char	*buffer;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	readed_bytes = 1;
	while (ft_check_line(saved) == 0 && readed_bytes != 0)
	{
		readed_bytes = read(fd, buffer, BUFFER_SIZE);
		if (readed_bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[readed_bytes] = '\0';
		saved = ft_strjoin(saved, buffer);
	}
	free(buffer);
	return (saved);
}

char	*get_next_line(int fd)
{
	static char	*buffer[10000];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = find_next_line(buffer[fd], fd);
	if (!buffer[fd])
		return (NULL);
	line = cut_at_line(buffer[fd]);
	buffer[fd] = clean_at_line(buffer[fd]);
	return (line);
}
