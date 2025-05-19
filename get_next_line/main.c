/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:27:52 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/19 18:52:43 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <string.h>

int main()
{
	int		fd1;
	char	*line;
	int		line_count = 0;

	fd1 = open("file1.txt", O_RDONLY);
	if (fd1 == -1)
    {
        printf("Could not open file.txt\n");
        return 0;
    }
	printf("opened\n");
	while ((line = get_next_line(fd1)) != NULL)
    {

		printf("Line %d:   %s", ++line_count, line);
        if (line[strlen(line) - 1] != '\n')
            printf(" (no newline)");
        free(line);
    }
	close(fd1);
}