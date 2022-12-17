/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:33:20 by ifujimot          #+#    #+#             */
/*   Updated: 2022/11/02 12:34:33 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// char にキャストする理由
// size_t はどんな時に使うか
// unsigned char

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)buf)[i] = (char)ch;
		i++;
	}
	return (buf);
}

int	main(void)
{
	char	str[] = "0123456789";

	ft_memset(str + 2, '!', 5);
	printf("%s\n", str);
	return (0);
}
