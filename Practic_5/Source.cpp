#include <iostream>
#include <string>
#include "Structs.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 3;
	book* arr_book = new book[n];
	book* arr_book2 = new book[n]{};

	arr_book[0] = { "Метро 2033", "Дмитрий Глуховский", 2005, 650, 499 };
	arr_book[1] = { "Сердце Пармы", "Алексей Иванов", 2000, 610, 249 };
	arr_book[2] = { "Грехи наших отцов", "Оса Ларсон", 2021, 560, 399 };

	for (int i = 0; i < n; i++)
		show_book(arr_book[i]);

	for (int i = 0; i < n; i++)
		std::cout << "Автор " << i + 1 << " книги: " << author_name(arr_book[i]) << "\n";

	save_book(arr_book[1], "file.txt");

	//add_book(arr_book2[0], n);


	return 0;
}