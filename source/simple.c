/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbolat <bbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:47:11 by bbolat            #+#    #+#             */
/*   Updated: 2022/10/09 14:47:12 by bbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_small_sort(t_list **stackA, t_list **stackB)
{
	(void)stackB;
	if (ft_lstsize(*stackA) == 2)
	{
		if ((*stackA)->content > (*stackA)->next->content)
			sa(stackA);
	}
	else if (ft_lstsize(*stackA) == 3)
		ft_sort_three(stackA);
	else if (ft_lstsize(*stackA) == 4)
		ft_sourt_four(stackA, stackB);
	else if (ft_lstsize(*stackA) == 5)
		ft_sort_five(stackA, stackB);
}
