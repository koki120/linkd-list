#include <stdio.h>
#include <linked_list.h>

void show_list(CELL *head)
{
    for (CELL *p = head; p != NULL; p = p->nextDataPointer)
    {
        printf("%d\n", p->data);
    }
}
