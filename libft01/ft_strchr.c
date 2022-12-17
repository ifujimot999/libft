/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:52:17 by ifujimot          #+#    #+#             */
/*   Updated: 2022/11/02 14:31:58 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*buf;

	buf = (char *)s;
	while (*buf != '\0')
	{
		if (*buf == c)
			return (buf);
		buf++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str;
	char	*p;
	int		c;

	str = "HappyBirthday";
	printf("検索文字を入れてね");
	c = getchar();
	p = ft_strchr(str, c);
	if (p != NULL)
	{
		printf("%cは文字列%ld番目にあります\n", c, p - str);
		printf("以降の文字列は%sです。\n", p);
	}
	else
		printf("%cは見つかりませんでした\n", c);
	return (0);
}
