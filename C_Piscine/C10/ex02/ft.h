/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:38:43 by cna               #+#    #+#             */
/*   Updated: 2022/06/07 22:40:18 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

void	ft_putstr(char *str);
void	display(char *exe, char *str, int bytes);
void	display2(char *exe, char *str);
void	display_name(char *str);
void	ft_putstr(char *str);
void	ft_tail(char *str, int skip);
void	reverse_putstr(char *str, int bytes, int len);
int		ft_strcmp(char *str, char *str2);
int		count_line(char *buf);

#endif
