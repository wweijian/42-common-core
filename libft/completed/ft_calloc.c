/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:09:37 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/08 12:27:24 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ret;
	unsigned char	*buf;
	size_t			total_size;

	total_size = nmemb * size;
	if ((nmemb == 18446744073709551615UL || size == 18446744073709551615UL)
		|| (total_size == 0))
		return (NULL);
	ret = (void *)malloc(total_size);
	if (!ret)
		return (0);
	buf = (unsigned char *)ret;
	while (total_size != 0)
	{
		*buf = '\0';
		buf++;
		total_size--;
	}
	return (ret);
}

/* #include <stdio.h>

int main(void)
{
	size_t	nmemb = 10;
	size_t	size = 10;
	void	*ptr = ft_calloc(nmemb, size);
	unsigned char	*buf = (unsigned char *)ptr;

	for(unsigned long i = 0; i < nmemb * size;i++)
	{
		if (buf[i] != '\0')
		{
			printf("non null error");
			break;
		}
		
	}

	printf("OKAY\n");
	free(ptr);
} */