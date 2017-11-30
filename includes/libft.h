/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:19:42 by bavram            #+#    #+#             */
/*   Updated: 2017/11/30 17:42:48 by bavram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <libc.h>
# include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);
size_t	ft_strlcat(char *dst, char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

#endif
