/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mepedro- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/12 02:36:01 by mepedro-     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/12 06:47:43 by mepedro-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	if (nb == 0)
		return (0);
	else
		power = nb * nb;
	return (power);
}

int		main()
{
		printf("%d", ft_iterative_power(8, 2));
		return(0);
}
