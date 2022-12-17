/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <ifujimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:37:38 by ifujimot          #+#    #+#             */
/*   Updated: 2022/12/03 13:40:33 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t needle_len;
	size_t haystack_len;

	i = 0;
	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if(len == 0)
		return (0);
	if(!needle)
		return (haystack);
	while(i <= len && i <= haystack_len)
	{
		j = 0;
		while(haystack[i + j] == needle[j] && j < needle_len )
		{
			if(j == needle_len - 1)
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);

}

int	main(void)
{
	char *haystack = "HappyBirthday";
	char *needle = "airth";
	char	*p;

	p = ft_strnstr(haystack, needle, 20);
	printf("%s", p);
	return (0);
}
