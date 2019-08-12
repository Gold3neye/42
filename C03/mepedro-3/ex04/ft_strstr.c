/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mepedro- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/08 19:49:46 by mepedro-     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/10 19:06:31 by mepedro-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++ != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;
	int i;
	int equal;

	i = 0;
	a = 0;
	if (*to_find == '\0')
		return (str);
	i = ft_strlen(to_find);
	while (str[a])
	{
		b = 0;
		equal = 0;
		while (to_find[b])
		{
			if (str[a + b] == to_find[b])
				equal++;
			if (equal == i)
				return (&str[a]);
			b++;
		}
		a++;
	}
	return (0);
}
