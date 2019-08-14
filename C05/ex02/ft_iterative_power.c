/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mepedro- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 04:53:13 by mepedro-     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 06:29:12 by mepedro-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int value;
	int i;

	i = 1;
	value = nb;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0 || nb < 0)
		return (0);
	else
		while (power > i)
		{
			value *= nb;
			i++;
		}
	return (value);
}
