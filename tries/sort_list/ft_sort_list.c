/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:28:36 by tibabaya          #+#    #+#             */
/*   Updated: 2026/11/05 13:47:32 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
t_list	*ft_list_sort(t_list *list ,int (*cmp)(int, int))
{
	t_list	*curr;
	int	swapped;
	int	tmp;

	curr = list;
	swapped = 1;
	while (swapped)
	{
		curr = list;
		swapped = 0;
		while (curr->next)
		{
			if (cmp(curr->data, (curr->next)->data) > 0)
			{
				tmp = curr->data;
				curr->data = (curr->next)->data;
				(curr->next)->data = tmp;
				swapped = 1;
			}
			curr = curr->next;
		}
	}
	return (list);
}
