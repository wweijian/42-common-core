/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 12:59:08 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/09 16:27:45 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1buf;
	char	*setbuf;

	if (!s1 || !set)
		return (NULL);
	s1buf = ft_strdup(s1);
	if (!s1buf)
		return (NULL);
	setbuf = ft_strnstr(s1buf, set, ft_strlen(s1buf));
	if (!setbuf)
		return (NULL);
	setbuf = ft_memmove(setbuf, setbuf + ft_strlen(set), ft_strlen(s1buf));
	return (s1buf);
}

/* #include <string.h>
#include <stdio.h>

int main ()
{
	char *s1 = strdup("qwertyuiopasdfghjklzxcvbnm");
	char *exist = strdup("asdfghjkl");
	char *last = strdup("zxcvbnm");
	char *first = strdup("qwerty");
	char *noexist = strdup("aa");

	char *s1trim = ft_strtrim(s1,s1);
	char *existtrim = ft_strtrim(s1,exist);
	char *lasttrim = ft_strtrim(s1,last);
	char *firsttrim = ft_strtrim(s1,first);
	char *noexisttrim = ft_strtrim(s1,noexist);

	printf("s1 : s1---------    %s\n", s1trim);
	printf("s1 : exist------    %s\n", existtrim);
	printf("s1 : last-------    %s\n", lasttrim);
	printf("s1 : first------    %s\n", firsttrim);
	printf("s1 : noexist----    %s\n", noexisttrim);

	free(s1);
	free(exist);
	free(last);
	free(first);
	free(noexist);
	free(s1trim);
	free(existtrim);
	free(lasttrim);
	free(firsttrim);
	free(noexisttrim);

} */