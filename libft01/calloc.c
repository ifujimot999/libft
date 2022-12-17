/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <ifujimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:24:34 by ifujimot          #+#    #+#             */
/*   Updated: 2022/12/14 15:25:54 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr, *p;
	int i;

	ptr = (int *)calloc(500, sizeof(int));
	if(ptr == NULL)
	{
		printf("メモリ確保できないよ\n");
		exit(EXIT_FAILURE);
	}

	p = ptr;
	i = 0;
	while(i < 500)
	{
		*p = i;
		printf("%d", *p);
		p++;
		i++;
	}

	free(ptr);

	return (0);
}