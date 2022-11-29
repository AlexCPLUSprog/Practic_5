#pragma once

#include <iostream>
#include <string>
#include "Structs.h"

void show_book(book& B) {
	std::cout << "Название книги: " << B.name_book << "\n";
	std::cout << "Автор книги: " << B.author << "\n";
	std::cout << "Год издания: " << B.year_publish << "\n";
	std::cout << "Количество страниц: " << B.pages << "\n";
	std::cout << "Цена за экземпляр: " << B.price << "\n\n";
}

std::string author_name(book& A) {
	return A.author.substr(A.author.find(" ") + 1);
}

void clear_arr(book* C, int size) {
	delete[] C;
	std::cout << "Массив очищен!\n";
}

void save_book(book& S, std::string path) {
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		out << S.name_book << "\n";
		out << S.author << "\n";
		out << S.year_publish << "\n";
		out << S.pages << "\n";
		out << S.price << "\n";
		out.close();
	}
	else
		out.close();
}

void add_book(book* D, const int length) {
	book* tmp = new book[length + 1]{};
	for (int i = 0; i < length; i++)
		tmp[i] = D[i];
	delete[] D;
	D = tmp;
	std::cout << "Введите имя книги -> ";
	getline(std::cin, D[length].name_book);
	std::cout << "Введите фамилию и имя автора -> ";
	getline(std::cin, D[length].author);
	std::cout << "Введите год публикации книги -> ";
	std::cin >> D[length].year_publish;
	std::cout << "Введите количество страниц -> ";
	std::cin >> D[length].pages;
	std::cout << "Введите цену за экземпляр -> ";
	std::cin >> D[length].price;
}
