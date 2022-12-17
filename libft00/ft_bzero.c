/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:19:23 by ifujimot          #+#    #+#             */
/*   Updated: 2022/11/02 12:53:37 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

int	main(void)
{
	char	str1[] = "0123456789";
	char	str2[] = "0123456789";

	ft_bzero (str1+2, 3);
//	bzero(str2+100, 5);
	printf("%s\n", str1);
//	printf("%s", str2);
	return (0);
}
