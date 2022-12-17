/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:53:54 by ifujimot          #+#    #+#             */
/*   Updated: 2022/11/02 15:51:30 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*buf;

	buf = (char *)s;
	while (n > 0)
	{
		if (*buf == c)
			return (buf);
		buf++;
		n--;
	}
	return (NULL);
}

int	main(void)
{
	char str[] = "abcdef\0ghij";
	char *p;

	p = ft_memchr(str, 'h', 15);	
	printf("検索文字は文字列の%ld番目\n",p - str);

	p = memchr(str, 'h', 15);	
	printf("検索文字は文字列の%ld番目\n",p - str);

	return (0);
}
