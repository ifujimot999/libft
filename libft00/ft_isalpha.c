/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:13:39 by ifujimot          #+#    #+#             */
/*   Updated: 2022/11/02 12:37:26 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	return ('A' <= c && c >= 'Z' || 'a' <= c && c >= 'z');
}

int	main(void)
{
	char	c = 's';

	printf ("%d", ft_isalpha(c));
	return (0);
}
//0は間違ってる時