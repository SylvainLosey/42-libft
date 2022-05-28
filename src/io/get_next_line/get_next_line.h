/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:32:47 by sylvain           #+#    #+#             */
/*   Updated: 2022/05/28 14:16:48 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

char	*get_next_line(int fd);
char	*get_stash(int fd, char *stash);
char	*copy_until_return_or_end(char *source);
char	*remove_until_return(char *source);
bool	contains_char(char *str, char c);
size_t	strlen_until_char(const char *s, const char c);
char	*gnl_strjoin(char *s1, char *s2);

#endif