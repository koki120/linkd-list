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
extern void insert_cell(CELL **preCell, int data);

// 連結リストの先頭にデータを挿入
extern void insert_cell_top(CELL **head, int data);

// 連結リストに昇順(小さいもの順)で新しいデータを挿入
extern void insert_cell_in_ascending_order(CELL **head, int data);

// 連結リストのデータを削除
extern void delete_cell(CELL **preCell);

// 連結リストのデータ探索
extern CELL *search_cell(CELL *startCell, int data);
