/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:23:10 by ifujimot          #+#    #+#             */
/*   Updated: 2022/12/06 18:33:39 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	str = (char *)malloc(*s1);
	if (str == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		return (str);
	}
}

int	main(void)
{
	char	*str = "Happy birthday";
	char	*newstr;

	if ((newstr = ft_strdup(str)) != NULL)
		printf("new string is : %s\n", newstr);
	else
		printf("cannot\n");
	return (0);
}
