/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mepedro- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 05:49:08 by mepedro-     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 08:29:40 by mepedro-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if(min > max)
	{
		tab = NULL;
		return(tab);
	}
	tab = malloc(sizeof(int)*(max - min));
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
