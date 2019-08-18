/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test2.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: abourbou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 17:53:07 by abourbou     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 19:05:05 by abourbou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int test3_2(int grid, int row, int col)
{
	char	pattern[4];

		pattern = "1243";
	if (check(grid, row, col, pattern))
		return (1)
			pattern = "2341";
	if (check(grid, row, col, pattern))
		return (1);
	pattern = "1342";
	if (check(grid, row, col, pattern))
		return (1);
	return (0);
}

int tests2_3(int grid, int row, int col)
{
	char	pattern[4];

	pattern = "3421";
	if (check(grid, row, col, pattern))
		return (1);
	pattern = "1432";
	if (check(grid, row, col, pattern))
		return (1);
	pattern = "2431"
		if (check(grid, row, col, pattern))
			return (1);
	return (0);
}

int test3_1(int grid, int row, int col)
{
	char	pattern[4];

	pattern = "1324";
	if (check(grid, row, col, pattern))
		return (1);
	pattern = "2314";
	if (check(grid, row, col, pattern))
		return (1);
	pattern = "2134";
	if (check(grid, row, col, pattern))
		return (1);
	return (0);
}

int test1_3(int grid, int row, int col)
{
	char	pattern[4];
		pattern = "4231";
	if (check(grid, row, col, pattern))
		return (1);
	pattern = "4132";
	if (check(grid, row, col, pattern))
		return (1);
	pattern = "4312";
	if (check(grid, row, col, pattern))
		return (1);
	return (0);
}
