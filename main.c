#include <stdio.h>
#include <linked_list.h>

int main(int argc, char const *argv[])
{
    //  連結リストを取り扱うためには先頭のセルの場所（ポインタ）を覚える必要がある。
    // headは一番目のセルの場所（ポインタ）を格納。
    CELL *head = NULL;

    

    int count;

    count += insert_cell_end_or_insert_after_same_data(&head, 100);
    count += insert_cell_end_or_insert_after_same_data(&head, 132);
    count += insert_cell_end_or_insert_after_same_data(&head, 100);
    count += insert_cell_end_or_insert_after_same_data(&head, 1);
    count += insert_cell_end_or_insert_after_same_data(&head, 5);
    show_list(head);

    printf("count is %d\n", count);

    return 0;
}
