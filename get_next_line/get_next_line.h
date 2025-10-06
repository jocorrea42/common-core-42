/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:20:03 by jocorrea          #+#    #+#             */
/*   Updated: 2023/02/12 16:38:49 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
void	*ft_calloc(size_t count, size_t size);
char	*fill_line_buffer(int fd, char *buffer);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *buffer, char *tail, ssize_t size);
int		ft_strlen(char *str);
void	*true_free(char **buffer);
#endif
