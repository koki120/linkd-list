#include <stdio.h>
#include <stdlib.h>
#include <linked_list.h>

// 挿入したい場所の前にあるcellのポインタを渡す。
void insert_cell(CELL **p, int d)
{
    // CELL型の"ポインタ"を生成
    // CELL new_cellとしないのは、この関数内でしかnew_cellは確保されないから。
    // 関数が終了したら、new_cellはしばらくしたら消滅してしまう。
    // また、CELL static new_cellで永久的に確保できるが、呼び出されるたびに同じものを指すので、CELLは増えない。
    CELL *new_cell;

    // sizeof(CELL)はCELLのデータの大きさを返す。
    // mallocはデータの大きさを引数にして、メモリを確保し、確保した場所を返り値とする。
    // 返り値がCELLの場所（ポインタ）であることをmalloc自身は知らないので、(CELL *)で型変換する。
    new_cell = (CELL *)malloc(sizeof(CELL));

    // new_cellに挿入したいデータを入れる
    new_cell->data = d;

    // 挿入したい場所の前のセルが指していた場所を、挿入するセルのnextDataPointerに代入する。
    new_cell->nextDataPointer = (*p)->nextDataPointer;

    // 挿入したい場所の前のセル指している場所を、新しく挿入するセルの場所にする。
    (*p)->nextDataPointer = new_cell;
}

// リストの先頭に追加する場合(リストが空の場合も使用可能)
void insert_cell_top(CELL **head, int d)
{
    // CELL型のポインタを生成
    CELL *new_cell;

    // sizeof(CELL)はCELLのデータの大きさを返す。
    // mallocはデータの大きさを引数にして、メモリを確保し、確保した場所を返り値とする。
    // CELLの場所であることをmalloc自身は知らないので、(CELL *)で型変換する。
    new_cell = (CELL *)malloc(sizeof(CELL));

    // new_cellに挿入したいデータを入れる
    new_cell->data = d;

    // 挿入したい場所の前のセルが指していた場所（ポインタ）を、挿入するセルのnextDataPointerに代入する。
    new_cell->nextDataPointer = *head;

    // 挿入したい場所の前のセルが指している場所（ポインタ）を、新しく挿入するセルの場所（ポインタ）にする。
    *head = new_cell;
};

// 昇順(小さいもの順)で新しいcellを挿入
void insert_cell_in_ascending_order(CELL **head, int insertData)
{
    if (*head == NULL)
    {
        insert_cell_top(head, insertData);
        return;
    }

    // pもheadが指しているCELLの場所（ポインタ）を指す。
    CELL *cell = *head;
    // qはheadが指しているCELLの場所（ポインタ）の次のCELLの場所（ポインタ）を指す。
    // したがって、head == NULLなら(*head)->nextDataPointerでエラー（せぐふぉ）が起きる。
    CELL *nextCell = (*head)->nextDataPointer;

    while (insertData < nextCell->data && nextCell != NULL)
    {
        cell = nextCell;
        nextCell = nextCell->nextDataPointer;
    }

    // 先頭のデータと比較して、小さいなら先頭挿入
    if (insertData < (*head)->data)
    {
        insert_cell_top(head, insertData);
    }
    else
    {
        insert_cell(&cell, insertData);
    }
    return;
};
