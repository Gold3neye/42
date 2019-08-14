/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factoriel.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mepedro- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/12 01:33:52 by mepedro-     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 06:26:17 by mepedro-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb == 0 || nb == 1)
		return (fact);
	if (nb < 2)
		return (0);
	while (nb >= 2)
		fact *= nb--;
	return (fact);
}
