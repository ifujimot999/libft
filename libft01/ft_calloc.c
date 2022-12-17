/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:34:18 by ifujimot          #+#    #+#             */
/*   Updated: 2022/12/06 18:07:39 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

void	*ft_calloc(size_t count, size_t size)
{
	int		*p;

	p = (int *)malloc(count * size);
	ft_memset(p, '\0', count * size);
	return (0);
}

int	main(void)
{
	int *ptr, *p;
	int i;

	ptr = (int *)ft_calloc(5, sizeof(int));
	if (ptr == NULL)
	{
		printf("cannot\n");
		exit(EXIT_FAILURE);
	}
	p = ptr;
	for(i = 0; i < 13; i++)
	{
		*p = i;
		printf("%d ", *p);
		p++;
	}
	free(ptr);
	return (0);
}
