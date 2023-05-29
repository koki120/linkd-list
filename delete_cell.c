#include <stdio.h>
#include <stdlib.h>
#include <linked_list.h>

// pre_cellの直後を削除
void delete_cell(CELL **preCell)
{
    CELL *deleteCell;
    deleteCell = (*preCell)->nextDataPointer;
    (*preCell)->nextDataPointer = deleteCell->nextDataPointer;

    // deleteCellが確保していた領域を解放
    free(deleteCell);
};
