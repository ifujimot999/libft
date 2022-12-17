/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <ifujimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:07:20 by ifujimot          #+#    #+#             */
/*   Updated: 2022/12/07 16:36:31 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char *str;

	str = (char*)malloc(sizeof(char) * (30));
	i = 0;
	while(s1[i] != '\0')
	{
		j = 0;
		while(set[j] != '\0')
		{
			if(s1[i] == set[j])
			{
				printf("same  :");
				i++;
			}
			else
			{
				str[i] = s1[i];
				printf("dif  :");
				
			}
			printf("%s\n", str);
			j++;
		}
		i++;
	}
	return (str);
	
}

int	main (void)
{
	char str[] = "21Happy21Birth2";
	char trim[] = "12";
	char *p;
	
	p = ft_strtrim(str, trim);
	printf("%s", p);
	return (0);
}