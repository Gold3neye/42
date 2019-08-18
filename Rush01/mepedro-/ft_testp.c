/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_pat.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: abourbou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:47:54 by abourbou     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 18:28:08 by abourbou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		check(int **grid, int row, int col, char pattern[4])
{
	int i;

	i = 0;
	if (col == 0)
		while (i <= 3)
		{
			if (grid[row][i] != pattern[i] + 48)
				return (0);
			i++;
		}
	else
	{
		while (i <= 3)
		{
			if (grid[i][col] != pattern[i] + 48)
				return (0);
			i++;
		}
	}
	return (1);
}
