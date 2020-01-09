buddy.exe : biggest_3.o bubble_sort.o reverse.o factorial.o palindrome.o main.o
	gcc -o buddy.exe biggest_3.o bubble_sort.o reverse.o factorial.o palindrome.o main.o
biggest_3.o : biggest_3.c
	gcc -c biggest_3.c
bubble_sort.o : bubble_sort.c
	gcc -c bubble_sort.c
reverse.o : reverse.c
	gcc -c reverse.c
factorial.o : factorial.c
	gcc -c factorial.c
palindrome.o : palindrome.c
	gcc -c palindrome.c
main.o : main.c
	gcc -c main.c
