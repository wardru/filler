#include "libft.h"

void    ft_lstadd_b(t_list **alst, t_list *new)
{
	t_list    *tmp;

	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	tmp = *alst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return ;
}