/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:01:42 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/08 14:21:39 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	size_t	len;
	int		i;

	if (s == NULL)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	ret = (char *) malloc (sizeof(char) * (len + 1));
	i = 0;
	while (s[i])
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/* #include <stdio.h>
#include <string.h>

int main ()
{
	char *s0 = strdup("nihao");
	char *s1 = ft_strdup(s0);
	printf("s1: %s\n", s1);
} */