// 連結リストの構造
typedef struct _cell
{
    // 任意のデータ型を入れることができる 複数のデータをもつことも可能。
    int data;
    // 自分（CELL）と同じ型の場所（ポインタ）を入れる箱
    struct _cell *nextDataPointer;
    // CELLは[struct _cell]の言い換え
} CELL;

// 連結リストの表示
extern void show_list(CELL *head);

// 連結リストの長さ
extern int list_length(CELL *head);

// 連結リストにデータを挿入
extern void insert_cell(CELL **pre_cell, int data);

// 連結リストの先頭にデータを挿入
extern void insert_cell_top(CELL **head, int data);
