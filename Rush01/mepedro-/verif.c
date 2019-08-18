/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush01.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ermartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 12:46:15 by ermartin     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 17:20:05 by abourbou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		check_0(int ctab, int ltab, int tab[4][4], int cond[4][4])
{
	int nbt;
	int tmax;

	ctab = -1;
	while (ctab++ < 3)
	{
		nbt = 0;
		tmax = 0;
		ltab = -1;
		while (ltab++ < 3)
		{
			if (tab[ltab][ctab] > tmax)
			{
				tmax = tab[ltab][ctab];
				nbt++;
			}
		}
		if (nbt != cond[0][ctab])
			return (0);
	}
	return (1);
}

int		check_1(int ctab, int ltab, int tab[4][4], int cond[4][4])
{
	int nbt;
	int tmax;

	ctab = -1;
	while (ctab++ < 3)
	{
		nbt = 0;
		tmax = 0;
		ltab = -1;
		while (ltab++ < 3)
		{
			if (tab[3 - ltab][ctab] > tmax)
			{
				tmax = tab[3 - ltab][ctab];
				nbt++;
			}
		}
		if (nbt != cond[1][ctab])
			return (0);
	}
	return (1);
}

int		check_2(int ctab, int ltab, int tab[4][4], int cond[4][4])
{
	int tmax;
	int nbt;

	ctab = -1;
	while (ctab++ < 3)
	{
		nbt = 0;
		tmax = 0;
		ltab = -1;
		while (ltab++ < 3)
		{
			if (tab[ctab][ltab] > tmax)
			{
				tmax = tab[ctab][ltab];
				nbt++;
			}
		}
		if (nbt != cond[2][ctab])
			return (0);
	}
	return (1);
}

int		check_3(int ctab, int ltab, int tab[4][4], int cond[4][4])
{
	int tmax;
	int nbt;

	ctab = -1;
	while (ctab++ < 3)
	{
		nbt = 0;
		tmax = 0;
		ltab = -1;
		while (ltab++ < 3)
		{
			if (tab[ctab][3 - ltab] > tmax)
			{
				tmax = tab[ctab][3 - ltab];
				nbt++;
			}
		}
		if (nbt != cond[3][ctab])
			return (0);
	}
	return (1);
}

int		verif(int tab[4][4], int cond[4][4])
{
	int ltab;
	int ctab;
	int lcond;
	int tmax;
	int nbt;

	lcond = 0;
	nbt = 0;
	if (check_0(ctab, ltab, tab, cond) != 1)
		return (0);
	lcond++;
	if (check_1(ctab, ltab, tab, cond) != 1)
		return (0);
	lcond++;
	if (check_2(ctab, ltab, tab, cond) != 1)
		return (0);
	lcond++;
	if (check_3(ctab, ltab, tab, cond) != 1)
		return (0);
	return (1);
}
