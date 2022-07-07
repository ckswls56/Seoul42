/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   words.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:07:16 by cna               #+#    #+#             */
/*   Updated: 2022/06/09 20:10:43 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static int g_words = 0;

void	print_hex_content(char *str, int *i, int flag)
{
	int	j;
	char	*tmp;
	
	tmp = (char *)malloc(sizeof(char)*ft_strlen(str)+1);
	j = 0;
	tmp[j] = 0;
	if (flag)
		write(1, " ", 1);
	while (j < 16 && g_words-- != 0)
	{
		tmp[j] = str[*i];
		print_hex(str[*i]);
		write(1, " ", 1);
		if (j == 7 && flag)
			write(1, " ", 1);
		*i += 1;
		j++;
	}
	if (flag)
		sub_hex_content(&j, tmp);
	write(1, "\n", 1);
}

void	display(char *exe, char **str, int flag, char *tmp)
{
	char  buf[30 * KB - 1];
	int   fd;
	int   i;
	i = -1;
	while (str[++i])
	{
		errno = 0;
		fd = open(str[i], O_RDONLY);
		if (errno)
			print_error(exe, str[i]);
		else if (open(str[i], O_DIRECTORY) == -1)
		{
			g_words += read(fd, buf, sizeof(buf));
			tmp = ft_strdcpy(tmp, buf);
		}
		else
		{
			sub_display(str, exe, i);
			close(fd);
			return ;
		}
		close(fd);
   	}
	is_display(tmp, flag);
}

char	*ft_strdcpy(char *tmp, char *buf)
{
	char *t_tmp;
	int i;
    i = 0;
    if(*tmp == 0)
    {
        free(tmp);
        return (ft_strdup(buf));
    }
    else
    {
        t_tmp = (char *)malloc(sizeof(char) * (g_words + 1));
        while (tmp[i])
        {
            t_tmp[i] = tmp[i];
            i++;
        }
        free(tmp);
        while (i < g_words)
        {
            t_tmp[i++] = *buf;
            buf++;
        }
        t_tmp[i] = '\0';
        return (t_tmp);
    }
}

void    is_display(char *tmp, int flag)
{
    int     i;

    i = 0;
    while(i < g_words)
    {
        print_first_line(i, flag, 0);
        print_hex_content(tmp, &i, flag);
    }
    print_first_line(i, flag, 1);
}

void	ft_read(int fd, char *res, int flag)
{
	char	buf[30 * KB - 1];
	int		j;
	int		total;

	total = 0;
	j = 0;
	g_words = read(fd, buf, sizeof(buf));
	while (g_words != 0)
	{
		ft_strncat(res, buf, g_words);
		j += g_words;
		if (j > 15)
		{
			print_line_cat(&total,res,flag);
			if(j > 31)
			{
				total += (j / 16) * 16 - 16;
				write(1, "*\n", 2);
			}
			j = 0;
		}
		g_words = read(fd, buf, sizeof(buf));
		if(g_words == 0)
			print_eof(j, &total, flag, res);
	}
}
