#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *tmp;
	t_list *tmp1;

	if (!lst || !f)
		return (NULL);
	tmp1 = (*f)(lst);
	if ((new = ft_lstnew(tmp1->content, tmp1->content_size)) == NULL)
		return (NULL);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		tmp1 = (*f)(lst);
		if ((tmp->next = ft_lstnew(tmp1->content, tmp1->content_size)) == NULL)
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (new);
}
