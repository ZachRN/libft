/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 10:46:56 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/19 14:59:18 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *c)
{
	int i;
	int m;
	int value;

	i = 0;
	m = 0;
	value = 0;
	if (c[i] == 45)
	{
		m = 1;
		i = 1;
	}
	while (c[i] >= 48 && c[i] <= 57)
	{
		value = (value * 10) + (c[i] - 48);
		i++;
	}
	if (m == 1)
		value = value * -1;
	return (value);
}
