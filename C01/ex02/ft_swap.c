/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:53:41 by vboluda-          #+#    #+#             */
/*   Updated: 2023/10/30 15:53:46 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int main()
{
    int n1 = 1;
    int n2 = 2;

    ft_swap(&n1, &n2);
    printf("%d\n", n2);
	printf("%d", n1);
    return 0;
}
*/
