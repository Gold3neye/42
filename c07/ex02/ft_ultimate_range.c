/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mepedro- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 08:30:06 by mepedro-     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 08:41:28 by mepedro-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int nb;
	int *tab;
	int i;

	nb = min;
	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (-1);
	}
	tab = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (max - nb);
}
