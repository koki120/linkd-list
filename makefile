# Makefile

run:linked-list.exe
	./linked-list.exe

build:linked-list.exe

linked-list.exe: main.o insert_cell.o list_length.o show_list.o
	gcc -Wall -O2 -o linked-list main.o insert_cell.o list_length.o show_list.o
# -Wall コンパイル時のエラーを有効化
# -O3 最適化オプションで -O0~-O3まである。

main.o: main.c
	gcc -c main.c

insert_cell.o: insert_cell.c
	gcc -c insert_cell.c

list_length.o: list_length.c
	gcc -c list_length.c

show_list.o: show_list.c
	gcc -c show_list.c

clean:
	rm -f main.o insert_cell.o list_length.o show_list.o linked-list.exe
