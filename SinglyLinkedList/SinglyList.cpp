#include "SinglyList.h"

void SinglyList::slstore(struct address* i,struct address* last)
{
	if (!last)
	{
		last = i; /* ������ ������� � ������ */
	}
	else
	{
		(last)->next = i;
	}
	i->next = NULL;
	last = i;
}
