/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <ifujimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:03:20 by ifujimot          #+#    #+#             */
/*   Updated: 2022/12/14 15:25:58 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last_char;
	char	*first_char;

	first_char = (char *)s;
	last_char = s + (ft_strlen(first_char) - 1);
	while (last_char != first_char)
	{
		if (*last_char == c)
			return (last_char);
		last_char--;
	}
	return (NULL);
}

int	main(void)
{
	char	*str;
	char	*p;
	int		c;

	str = "Happy";
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
