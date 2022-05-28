/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:40:34 by slosey            #+#    #+#             */
/*   Updated: 2022/05/28 16:57:12 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** -------------------------- External Headers ---------------------------------
*/

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <errno.h>
# include <limits.h>

/*
** -------------------------- Structs ---------------------------------
*/
typedef struct s_node
{
    int             value;
    struct s_node   *next;
}   t_node;

/*
** -------------------------- Chars ---------------------------------
*/

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/*
** -------------------------- IO ---------------------------------
*/

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*get_next_line(int fd);
int		ft_printf(const char *fmt, ...);

/*
** -------------------------- Memory ---------------------------------
*/

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);

/*
** -------------------------- Numeric ---------------------------------
*/

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

/*
** -------------------------- Strings ---------------------------------
*/

int		ft_strncmp(char *s1, char *s2, unsigned int n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strncpy(char *dest, char *src, unsigned int n);

/*
** -------------------------- Linked lists ---------------------------------
*/

void    print_list(t_node *head);
t_node  *create_new_node(int value);
t_node  *insert_at_head(t_node **head, t_node *node_to_insert);
void    insert_after_node(t_node *node_to_insert_after, t_node *node_to_insert);
t_node  *find_node(t_node *head, int value);

#endif
