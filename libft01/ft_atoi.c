/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:07:25 by ifujimot          #+#    #+#             */
/*   Updated: 2022/12/06 16:09:49 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	num;
	int	type;

	num = 0;
	type = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			type = 1;
		str++;
	}
	while (*str == ' ')
		str++;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			break ;
		num = num + *str - 48;
		num = num * 10;
		str++;
	}
	num = num / 10 ;
	if (type == 1)
		num = -1 * num;
	return (num);
}

int	main(void)
{
	char str[] = "  12 34 abc";
	int num;

	num = ft_atoi(str);
	printf("int型変数numの値は: %d\n", num);
	return (0);
}
