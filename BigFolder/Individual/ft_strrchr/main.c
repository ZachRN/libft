/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 12:13:01 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 12:49:33 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrchr(const char *str, int c);

int        main(void)
{
    const char    *str1 = "abcdefghijklmnopqrstuvwxyz";
    const char    *str2 = "aabbccdde\0effgghhiijj";
    char        c = '\0';
    char        *ptr1;
    char        *ptr2;

    ptr1 = ft_strrchr(str1, c);
    ptr2 = ft_strrchr(str2, c);
    printf("char: %c, address: %p, reststr: %s\n", c, ptr1, ptr1);
    printf("char: %c, address: %p, reststr: %s\n", c, ptr2, ptr2);
    printf("address of terminator: %p\n", &str2[9]);
    return (0);
}