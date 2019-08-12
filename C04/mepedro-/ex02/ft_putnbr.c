/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mepedro- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 19:24:44 by mepedro-     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/10 19:24:59 by mepedro-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char nb)
{
	write(1, &nb, 1);
}

void		ft_putnbr2(long nb)
{
	if (nb < 0)
		nb = nb * (-1);
	if (nb > 9)
		ft_putnbr2(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void		ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
	ft_putnbr2(nb);
}
