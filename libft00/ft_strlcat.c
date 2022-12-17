/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:39:53 by ifujimot          #+#    #+#             */
/*   Updated: 2022/11/02 12:32:54 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (!dstsize)
		return (len_src);
	while (src[i] && len_dst + i < dstsize -1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	if (len_dst > dstsize)
		return (len_src + dstsize);
	return (len_dst + len_src);
}

int	main(void)
{
	char	str[126] = "HappyBirthday";
	char	str1[] = "NiceDay";
	int	result;

	result = ft_strlcat(str, str1, 5);
	printf("%d\n", result);
	return (0);
}

//constは変数を定数として扱う。
//constが付くと変数は書き換えができなくなり、読み取り専用となります。値を変更しようとするとコンパイルエラーが発生します。