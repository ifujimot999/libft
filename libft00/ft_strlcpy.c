/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:45:22 by ifujimot          #+#    #+#             */
/*   Updated: 2022/11/02 12:29:30 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;
	size_t	n;

	n = dstsize - 1;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (*dst);
}

int	main(void)
{
	char	str[125] = "GoodMorning";
	char	str2[] = "NiceDay";

	ft_strlcpy(str, str2, 4);
	printf("%s\n", str);
	return (0);
}
