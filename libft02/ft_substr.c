/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <ifujimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:00:47 by ifujimot          #+#    #+#             */
/*   Updated: 2022/12/07 09:37:00 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s == NULL)
		return (NULL);
	if(len <= 0 || start > *s)
	{
		str = (char *)malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(*s);
	if (str == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < len)
		{
			str[i] = s[start + i];
			i++;
		}
	}
	return (str);
}

int	main(void)
{
	char	str[] = "2022/12/06";
	char	*p;

	p = ft_substr(str, 5, 2);
	printf("%s", p);
	return (0);
}
