/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mepedro- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/04 21:04:49 by mepedro-     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 02:29:58 by mepedro-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c, char b, char a)
{
	if (a == '7' && b == '8' && c == '9')
	{
		write(1, &c, 1);
		write(1, &b, 1);
		write(1, &a, 1);
	}
	else
	{
		write(1, &c, 1);
		write(1, &b, 1);
		write(1, &a, 1);
		write(1, ", ", 2);
	}
}

void		ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while (a < '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "789", 3);
}
