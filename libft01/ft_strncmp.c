/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:00:55 by ifujimot          #+#    #+#             */
/*   Updated: 2022/11/02 15:24:25 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	ret;

	ret = 0;
	while (n > 0)
	{
		ret = *s1 - *s2;
		if (ret != 0)
		{
			return (ret);
		}
		s1++;
		s2++;
		n--;
	}
	return (ret);
}

int	main(void)
{
	char str[] = "ABC";
    
    printf("ABC: ACB   = %d\n", ft_strncmp(str, "ACB", 3));
    printf("ABC: ACB   = %d\n", strncmp(str, "ACB", 3));
    printf("ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 2));
    printf("ABC: AAA   = %d\n", strncmp(str, "AAA", 2));
    printf("ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
    printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
    printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
    printf("ABC: B     = %d\n", strncmp(str, "B", 2));
    printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));
    printf("ABC: A     = %d\n", strncmp(str, "A", 2));
    return 0;
}