/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <ifujimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:37:19 by ifujimot          #+#    #+#             */
/*   Updated: 2022/12/07 10:06:55 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	str = (char *)malloc(*s1 * *s2);
	if (str == NULL)
		return (NULL);
	else
	{
		i = 0;
		while(s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		j = 0;
		while(s2[j] != '\0')
		{
			str[i + j] = s2[j];
			j++;
		}
		return (str);
	}
}

int	main(void)
{
	char s1[] = "Happy";
	char s2[] = "Birthday";
	char *p;

	p = ft_strjoin(s1, s2);
	printf("%s", p);
	return (0);
}