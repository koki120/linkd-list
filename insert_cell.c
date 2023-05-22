#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void insert_cell(CELL **p, int d)
{
    // CELL型のポインタを生成
    // CELL new_cellとしないのは、この関数内でしかnew_cellは確保されないから。
    CELL *new_cell;

    // sizeof(CELL)はCELLのデータの大きさを返す。
    // mallocはデータの大きさを引数にして、メモリを確保し、確保した場所を返り値とする。
    // CELLの場所であることをmalloc自身は知らないので、(CELL *)で型変換する。
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
