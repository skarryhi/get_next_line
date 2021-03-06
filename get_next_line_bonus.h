/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarry <skarry@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 21:03:21 by skarry            #+#    #+#             */
/*   Updated: 2020/06/04 15:46:31 by skarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

void				*ft_calloc(size_t n, size_t b);
int					get_next_line(int fd, char **line);
char				*ft_strtosup(char const *s, size_t len);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlen(const char *str);
char				*ft_strjoin(char *s1, char *s2);

#endif
