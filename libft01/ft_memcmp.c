/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifujimot <k41fujimoto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:52:49 by ifujimot          #+#    #+#             */
/*   Updated: 2022/11/02 16:36:51 by ifujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	char	*buf1;
	char	*buf2;
	int	ret;

	buf1 = (char *)s1;
	buf2 = (char *)s2;
	ret = 0;
	while (n > 0)
	{
		ret = *buf1 - *buf2;
		if (ret != 0)
			return (ret);
		buf1++;
		buf2++;
		n--;
	}
	return (ret);
}

int	main(void)
{
        char buf1[] = "\0abc\0de";      /* 途中に空文字のある文字列 */
        char buf2[] = "\0abc\0de";
        char buf3[] = "\0abcdef";
        
        if (ft_memcmp(buf1, buf2, 7) == 0)
                printf("buf1 = buf2\n");
        else
                printf("buf1 != buf2\n");

        if (ft_memcmp(buf1, buf3, 7) == 0)
                printf("buf1 = buf3\n");
        else
                printf("buf1 != buf3\n");

        return 0;
}
