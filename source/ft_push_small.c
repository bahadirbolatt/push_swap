/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbolat <bbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:46:25 by bbolat            #+#    #+#             */
/*   Updated: 2022/10/09 14:46:26 by bbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_small_a(t_list **stackA, t_list **stackB, int flag)
{
	t_list	*head;
	int		i;

	i = 0;
	head = *stackA;
	while (head)
	{
		if (head->index == flag)
		{
			if (i <= 2 - flag)
			{
				while (i-- > 0)
					ra(stackA);
			}
			else
			{
				while ((5 - flag) > i++)
					rra(stackA);
			}
			pb(stackA, stackB);
		}
		i++;
		head = head->next;
	}
}
