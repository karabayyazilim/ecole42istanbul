/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:31:36 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/27 13:58:11 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int tab[] = {1,2,3,4,5};
	int size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d", tab[0]);
}