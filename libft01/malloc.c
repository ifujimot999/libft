/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <ifujimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:14:11 by ifujimot          #+#    #+#             */
/*   Updated: 2022/12/06 10:20:45 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int *b = (int *)malloc(sizeof(int)*5);



	return (0);
}