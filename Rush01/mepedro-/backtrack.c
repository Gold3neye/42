/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   backtrack.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: abourbou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 13:57:25 by abourbou     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 20:16:29 by abourbou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		test(int tab[4][4], int ltab, int ctab, int nb);

void	cr_tab(int tab[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		find(int tab[4][4], int ctab, int nb)
{
	int ltab;

	ltab = 0;
	while (tab[ltab][ctab] != nb)
		ltab++;
	return (ltab);
}

int		cr_sudoku(int tab[4][4], int ltab, int ctab, int nb)
{
	int l_av;

	if (nb == 4 && ltab == 3 && ctab == -1)
		return (0);
	if (nb < 1)
		return (1);
	else if (ctab > 3)
		return (cr_sudoku(tab, 0, 0, nb - 1));
	else if (ctab < 0)
	{
		l_av = find(tab, 3, nb + 1);
		tab[l_av][3] = 0;
		return (cr_sudoku(tab, l_av + 1, 3, nb + 1));
	}
	else if (ltab > 3)
	{
		l_av = find(tab, ctab, nb);
		tab[l_av][ctab - 1] = 0;
		return (cr_sudoku(tab, nb, ltab + 1, l_av - 1));
	}
	else if (test(tab, ltab, ctab, nb) == 1)
	{
		tab[ltab][ctab] = nb;
		return (cr_sudoku(tab, ltab, ctab + 1, nb));
	}
	else if (test(tab, ltab, ctab, nb) == 0)
		return (cr_sudoku(tab, ltab + 1, ctab, nb));
	return (0);
}
