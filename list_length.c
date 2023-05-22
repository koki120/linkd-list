#include <stdio.h>
#include <linked_list.h>

int list_length(CELL *head)
{
    int length = 0;
    for (CELL *p = head; p != NULL; p = p->nextDataPointer)
    {
        length++;
    }
    return length;
}
