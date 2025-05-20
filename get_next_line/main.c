/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:27:52 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/20 22:00:13 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line_bonus.h"
#include "get_next_line.h"
#include <string.h>
#include <stdio.h>

int main()
{
	int		fd1;
	int		fd2;
	int		fd3;
	char	*line1;
	char	*line2;
	char	*line3;
	int		line_count = 0;

	fd1 = open("file1.txt", O_RDONLY);
	if (fd1 == -1)
	{
		printf("Could not open file.txt\n");
		return 0;
	}
	fd2 = open("file2.txt", O_RDONLY);
	if (fd2 == -1)
	{
		printf("Could not open file2.txt\n");
		return 0;
	}
	fd3 = open("file3.txt", O_RDONLY);
	if (fd3 == -1)
	{
		printf("Could not open file2.txt\n");
		return 0;
	}
	printf("opened\n");
	while ((line1 = get_next_line(fd1)) != NULL)
	{
		printf("Line %d:   %s", ++line_count, line1);
		printf("fd2:   %s", line2 = get_next_line(fd2));
		printf("fd3:   %s", line3 = get_next_line(fd3));
		if (line1[strlen(line1) - 1] != '\n')
			printf(" (no newline)");
		free(line1);
		free(line2);
		free(line3);
	}
	close(fd1);
}