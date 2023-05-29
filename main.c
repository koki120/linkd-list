#include <stdio.h>
#include <linked_list.h>

int main(int argc, char const *argv[])
{
    //  連結リストを取り扱うためには先頭のセルの場所（ポインタ）を覚える必要がある。
    // headは一番目のセルの場所（ポインタ）を格納。
    CELL *head = NULL;

    insert_cell_in_ascending_order(&head, 2);
    // insert_cell_in_ascending_order(&head, 1);

    show_list(head);

    return 0;
}
