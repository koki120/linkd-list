#include <stdio.h>
#include <stdlib.h>
#include <linked_list.h>

int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    printf("n:%d,m:%d\n",n,m);

        //  連結リストを取り扱うためには先頭のセルの場所（ポインタ）を覚える必要がある。
        // headは一番目のセルの場所（ポインタ）を格納。
        CELL *head = NULL;

    srand(10);

    // 0以上m未満の乱数を発生
    // ((double)rand() / (RAND_MAX + 1)) * m;

    int count;

    for (int index = 0; index < n; index++)
    {
        count += insert_cell_end_or_insert_after_same_data(&head, (int)(((double)rand() / (RAND_MAX + 1)) * m));
    }
    printf("count is %d\n", count);

    // show_list(head);

    return 0;
}
