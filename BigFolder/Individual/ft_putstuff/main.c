/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 14:35:25 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/19 14:40:45 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);

int		main(void)
{
	char *s = "Yooo, I am infact, a gamer";
	char c = 'a';
	int fd = 1;
	
	ft_putchar_fd(c,fd);
	ft_putstr_fd(s,fd);
	ft_putendl_fd(s,fd);
}