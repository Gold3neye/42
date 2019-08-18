/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tmarcon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 08:46:19 by tmarcon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 17:32:59 by tmarcon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

int			makenb(int i, char **tab, int nb)
{
	int y;

	if (nb > 0)
		write(1, " ", 1);
	nb++;
	y = 0;
	while (tab[i][++y])
		if (tab[i][y] == '\n')
			tab[i][y] = '\0';
	y = 0;
	while (tab[i][y] != ':')
		y++;
	while (tab[i][y + 1] == ' ')
		y++;
	while (tab[i][++y])
		if (tab[i][y] != ' ' || (tab[i][y] == ' ' && tab[i][y - 1] != ' '))
			write(1, &tab[i][y], 1);
	return (nb);
}

int			ft_putnbr(long int nb, char **tab, int i)
{
	if (nb >= 1000000000)
	{
		i = ft_putnbr((nb / 1000000000), tab, i);
		nb -= (nb / 1000000000) * 1000000000;
		i = makenb(31, tab, i);
		if (nb != 0)
			i = ft_putnbr(nb, tab, i);
	}
	else if (nb >= 1000000)
	{
		i = ft_putnbr((nb / 1000000), tab, i);
		nb -= (nb / 1000000) * 1000000;
		i = makenb(30, tab, i);
		if (nb != 0)
			i = ft_putnbr(nb, tab, i);
	}
	else if (nb >= 1000)
	{
		i = ft_putnbr((nb / 1000), tab, i);
		nb -= (nb / 1000) * 1000;
		i = makenb(29, tab, i);
		if (nb != 0)
			i = ft_putnbr(nb, tab, i);
	}
	else if (nb > 100)
	{
		i = ft_putnbr((nb / 100), tab, i);
		nb -= (nb / 100) * 100;
		i = makenb(28, tab, i);
		if (nb != 0)
			i = ft_putnbr(nb, tab, i);
	}
	else if (nb > 20)
	{
		i = makenb((nb / 10) + 18, tab, i);
		if (nb % 10 != 0)
			i = makenb(nb % 10, tab, i);
	}
	else
		i = makenb(nb, tab, i);
	return (i);
}

char		**dict_filler(char **tab, char *c, int fd)
{
	int i;
	int j;
	int sz;

	j = 0;
	while (j <= 31)
	{
		if (!(tab[j] = malloc(sizeof(char) * 500)))
			exit(1);
		i = 0;
		while (c[0] != '\n')
		{
			if ((j > 0 && i > 0) || j == 0)
				sz = read(fd, c, 1);
			tab[j][i] = c[0];
			i++;
		}
		tab[j][i] = '\0';
		sz = read(fd, c, 1);
		j++;
	}
	return (tab);
}

void		standard_dict(int argc, char **argv, char *src)
{
	int		fd;
	char	*c;
	char	**tab;

	tab = malloc(sizeof(char*) * 500);
	if (!(c = malloc(1 * sizeof(char))))
		exit(1);
	fd = open(src, O_RDONLY);
	if (fd < 0)
		exit(1);
	tab = dict_filler(tab, c, fd);
	ft_putnbr(ft_atoi(argv[argc - 1]), tab, 0);
	close(fd);
}

int			main(int argc, char **argv)
{
	if (argv[argc - 1][0] != '-' && argv[argc - 1][0] != '\0')
	{
		if (argc == 2)
			standard_dict(argc, argv, "numbers.txt");
		else if (argc == 3)
			standard_dict(argc, argv, argv[1]);
		else
			ft_putstr("Error");
	}
	else
		ft_putstr("Error");
	write(1, "\n", 1);
	return (0);
}
