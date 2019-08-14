/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mepedro- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 01:50:55 by mepedro-     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 02:08:40 by mepedro-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i * i <= nb)
	{
		if (nb % i == 0 && i != nb)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	long int		i;

	i = nb;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb * nb)
	{
		if (ft_is_prime(i) == 0)
		{
			++i;
		}
		else
		{
			break ;
		}
	}
	return (i);
}
