/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:26:15 by ifujimot          #+#    #+#             */
/*   Updated: 2022/11/02 12:35:36 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	str[] = "ABCdefghijklmnopqrstuvwxyz";

	printf("移動前 : %s\n", str);
	ft_memmove(str + 5, str, 3);
	printf("移動後 : %s\n", str);
	return (0);
}
