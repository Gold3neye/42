/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush03.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 14:58:41 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 20:01:28 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_top(int width)
{
	int i;

	i = 1;
	ft_putchar('A');
	while (i++ < width - 1)
		ft_putchar('B');
	if (width >= 2)
		ft_putchar('C');
	ft_putchar('\n');
}

void	draw_middle(int width)
{
	int i;

	i = 1;
	ft_putchar('B');
	while (i++ < width - 1)
		ft_putchar(' ');
	if (width >= 2)
		ft_putchar('B');
	ft_putchar('\n');
}

void	draw_bottom(int width)
{
	int i;

	i = 1;
	ft_putchar('C');
	while (i++ < width - 1)
		ft_putchar('B');
	if (width >= 2)
		ft_putchar('A');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int iter;

	if (x <= 0 || y <= 0)
		return ;
	iter = 1;
	draw_top(x);
	while (iter++ < y - 1)
		draw_middle(x);
	if (y > 1)
		draw_bottom(x);
}
