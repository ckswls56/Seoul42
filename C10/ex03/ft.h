/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:51:10 by cna               #+#    #+#             */
/*   Updated: 2022/06/09 19:51:11 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>
# include <stdlib.h>
# define KB 1024

int		ft_nbrlen(int nbr, int base_len);
int		ft_strlen(char *str);
int		ft_strcmp(char *str1, char *str2);
int		is_printable(char c);
void	ft_strncat(char *dest, char *src, int nb);
void	ft_putstr(char *str);
void	ft_read(int fd, char *res, int flag);
void	display(char *exe, char **str, int flag, char *tmp);
void	is_display(char *tmp, int flag);
void	print_error(char *exe, char *file);
void	print_content_printable(char *str);
void	print_hex(char c);
void	print_hex_content(char *str, int *i, int flag);
void	print_first_line(int word, int flag, int last);
void	print_line_cat(int *total, char *res, int flag);
void	print_eof(int j, int *total, int flag, char *res);
void	sub_hex_content(int *j, char *tmp);
void	sub_display(char **str, char *exe, int i);
char	*ft_strdcpy(char *tmp, char *buf);
char	*ft_strdup(char *src);
char	*ft_itoa_base(int nbr);

#endif
