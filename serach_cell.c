#include <stdio.h>
#include <linked_list.h>

CELL *search_cell(CELL *startCell, int data)
{
    while (startCell != NULL)
    {
        if (startCell->data == data)
            return startCell;
        startCell = startCell->nextDataPointer;
    }
    return NULL;
}
