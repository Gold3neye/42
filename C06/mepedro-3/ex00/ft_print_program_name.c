/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_program_name.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mepedro- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 19:10:06 by mepedro-     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/13 01:40:01 by mepedro-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	argc = 0;
	ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
