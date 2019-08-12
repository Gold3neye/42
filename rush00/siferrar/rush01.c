/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush01.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 14:54:54 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 20:01:19 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_top(int width)
{
	int i;

	i = 1;
	ft_putchar('/');
	while (i++ < width - 1)
		ft_putchar('*');
	if (width >= 2)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	draw_middle(int width)
{
	int i;

	i = 1;
	ft_putchar('*');
	while (i++ < width - 1)
		ft_putchar(' ');
	if (width >= 2)
		ft_putchar('*');
	ft_putchar('\n');
}

void	draw_bottom(int width)
{
	int i;

	i = 1;
	ft_putchar('\\');
	while (i++ < width - 1)
		ft_putchar('*');
	if (width >= 2)
		ft_putchar('/');
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
