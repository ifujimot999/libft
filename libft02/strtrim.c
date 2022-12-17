/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <ifujimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:42:17 by ifujimot          #+#    #+#             */
/*   Updated: 2022/12/07 15:25:33 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* ft_strtrim(char const* s1, char const* set)
{
	size_t	front;
	size_t	rear;
	char* str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = strlen(s1);
		while (s1[front] && strchr(set, s1[front]))
			front++;
		while (s1[rear - 1] && strchr(set, s1[rear - 1]) && rear > front)
			rear--;
		str = (char*)malloc(sizeof(char) * (rear - front + 1));
		if (str)
			strlcpy(str, &s1[front], rear - front + 1);
	}
	return (str);
}

// int main()
// {
// 	printf("%s\n", ft_strtrim("1234AAA2233Z1122", "1234"));
// 	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
// 	return 0;
// }

int	main (void)
{
	char str[] = "1234Happy321Birth234";
	char trim[] = "1234";
	char *p;
	
	p = ft_strtrim(str, trim);
	printf("%s", p);
	return (0);
}
