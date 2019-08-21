/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mepedro- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 19:20:09 by mepedro-     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 19:20:16 by mepedro-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ret;
	int		i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	if (!(ret = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	return (ret);
}
