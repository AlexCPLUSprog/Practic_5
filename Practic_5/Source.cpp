#include <iostream>
#include <string>
#include "Structs.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 3, m = 0, l = 0;
	book* arr_book = new book[n];	

	arr_book[0] = { "Метро 2033", "Дмитрий Глуховский", 2005, 650, 499 };
	arr_book[1] = { "Сердце Пармы", "Алексей Иванов", 2000, 610, 249 };
	arr_book[2] = { "Грехи наших отцов", "Оса Ларсон", 2021, 560, 399 };	

	do {
		std::cout << "Доступные команды:\n1. Вывод информации о книге.\n2. Показать автора книги.\n3. Записать информацию о книге в указанный путь.\n4. Добавить книгу в конец массива.\n5. Очистить массив.\n6. Завершение работы.\nВведите номер команды -> ";
		std::cin >> m;
		switch (m) {
		case 1: std::cout << "\nВведите номер книги(1 - 3) -> "; std::cin >> l; show_book(arr_book[l - 1]);
			continue;
		case 2: std::cout << "\nВведите номер книги(1 - 3), чтобы увидеть фамилию автора -> "; std::cin >> l; std::cout << "Автор " << l + 1 << " книги: " << author_name(arr_book[l - 1]) << "\n\n";
			continue;
		case 3: std::cout << "\nВведите номер книги(1 - 3), чтобы информацию о ней можно было записать в файл -> "; std::cin >> l; save_book(arr_book[l - 1], "file.txt"); std::cout << "Книга успешно записана в файл.\n\n";
			continue;
		case 4: add_book(arr_book, n); continue;
		case 5: clear_arr(arr_book, n); std::cout << "\n";	continue;
		case 6: std::cout << "\nЗавершаю работу...\n\n"; break;
		default: std::cout << "\nНет такой команды!\n\n"; continue;
		}
	} while (m != 6);


	return 0;
}