#include <stdio.h>
#include <linked_list.h>

void show_list(CELL *head)
{
    if (head == NULL)
    {
        printf("%d\n", 0);
    }

    for (CELL *p = head; p != NULL; p = p->nextDataPointer)
    {
        printf("%d\n", p->data);
    }
}
