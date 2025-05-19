/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:12:37 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/19 17:46:05 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*find_line(int fd, char *str)
{
	char	*buf;
	ssize_t	bytes_read;

	buf = malloc(sizeof(*buf) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(str, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[bytes_read] = '\0';
		str = ft_strjoin(str, buf);
	}
	free(buf);
	return (str);
}

static char	*make_line(char *str)
{
	char		*res;
	size_t		len;
	size_t		i;

	i = 0;
	if (!str || str[0] == '\0')
		return (NULL);
	len = 0;
	while (str[len] && str[len] != '\n')
		len++;
	if (str[len] == '\n')
		len++;
	res = malloc(sizeof(*res) * len + 1);
	if (!res)
		return (NULL);
	while (i++ < len)
		res[i] = str[i];
	res[len] = '\0';
	return (res);
}

static char	*remaining_line(char *str)
{
	char	*res;

	if (!str || !str[0])
	{
		free(str);
		return (NULL);
	}
	res = gnl_strdup(ft_strchr(str, '\n'));
	free(str);
	return (res);
}

char	*get_next_line(int fd)
{
	char		*output;
	static char	*str[1024];

	if (BUFFER_SIZE == 0 || fd < 0)
		return (NULL);
	str[fd] = find_line(fd, str[fd]);
	output = make_line(str[fd]);
	str[fd] = remaining_line(str[fd]);
	return (output);
}

/* 

	Memory leak potential in find_line:
	If ft_strjoin fails and returns NULL, 
	you lose the reference to the old str and can't free it later.

 */
