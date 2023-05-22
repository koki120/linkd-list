#include <stdio.h>
#include <linked_list.h>

int main(int argc, char const *argv[])
{
    //  連結リストを取り扱うためには先頭のセルの場所（ポインタ）を覚える必要がある。
    // headは一番目のセルの場所（ポインタ）を格納。
    CELL *head = NULL;

    for (int i = 10; i >= 0; i = i - 2)
    {
        insert_cell_top(&head, i);
    }

    show_list(head);

    return 0;
}
