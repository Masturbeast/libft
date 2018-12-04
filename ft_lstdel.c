#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *i;

	while (*alst)
	{
		i = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = i;
	}
}
