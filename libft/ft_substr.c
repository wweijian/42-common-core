/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:12:36 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/09 12:10:35 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	char	*src;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	src = (char *)s + start;
	if (ft_strlen(src) > len)
		src[len] = '\0';
	res = ft_strdup(src);
	return (res);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char			*s = strdup("I am Groot.");
	unsigned int	start = 5;
	size_t			len = 7;
	char			*res =  ft_substr(s,start,len)
	printf("resulting string: %s\n", res);
	free(res);
	
}
 */