/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzale <fgonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:58:16 by fgonzale          #+#    #+#             */
/*   Updated: 2023/01/06 20:18:42 by fgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
int		ft_check_line(char *saved);
char	*ft_strjoin(char *saved, char *buffer);
size_t	ft_strlen(char	*str);
char	*cut_at_line(char *saved);
char	*clean_at_line(char *saved);

#endif
