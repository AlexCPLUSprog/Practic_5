#pragma once

#include <iostream>
#include <string>
#include "Structs.h"

void show_book(book& B) {
	std::cout << "�������� �����: " << B.name_book << "\n";
	std::cout << "����� �����: " << B.author << "\n";
	std::cout << "��� �������: " << B.year_publish << "\n";
	std::cout << "���������� �������: " << B.pages << "\n";
	std::cout << "���� �� ���������: " << B.price << "\n\n";
}

std::string author_name(book& A) {
	return A.author.substr(A.author.find(" ") + 1);
}

void clear_arr(book* C, int size) {
	delete[] C;
	std::cout << "������ ������!\n";
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
	std::cout << "������� ��� ����� -> ";
	getline(std::cin, D[length].name_book);
	std::cout << "������� ������� � ��� ������ -> ";
	getline(std::cin, D[length].author);
	std::cout << "������� ��� ���������� ����� -> ";
	std::cin >> D[length].year_publish;
	std::cout << "������� ���������� ������� -> ";
	std::cin >> D[length].pages;
	std::cout << "������� ���� �� ��������� -> ";
	std::cin >> D[length].price;
}
