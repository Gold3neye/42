/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 14:19:55 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/04 18:15:51 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_topnbottom(int width)
{
	int i;

	i = 1;
	ft_putchar('o');
	while (i++ < width - 1)
		ft_putchar('-');
	if (width >= 2)
		ft_putchar('o');
	ft_putchar('\n');
}

void	draw_middle(int width)
{
	int i;

	i = 1;
	ft_putchar('|');
	while (i++ < width - 1)
		ft_putchar(' ');
	if (width >= 2)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int iter;

	iter = -1;
	if (x <= 0 || y <= 0)
		return ;
	while (iter++ < y - 1)
		if (iter == 0 || iter == y - 1)
			draw_topnbottom(x);
		else
			draw_middle(x);
}
