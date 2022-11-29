#include <iostream>
#include <string>
#include "Structs.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 3, m = 0, l = 0;
	book* arr_book = new book[n];	

	arr_book[0] = { "����� 2033", "������� ����������", 2005, 650, 499 };
	arr_book[1] = { "������ �����", "������� ������", 2000, 610, 249 };
	arr_book[2] = { "����� ����� �����", "��� ������", 2021, 560, 399 };	

	do {
		std::cout << "��������� �������:\n1. ����� ���������� � �����.\n2. �������� ������ �����.\n3. �������� ���������� � ����� � ��������� ����.\n4. �������� ����� � ����� �������.\n5. �������� ������.\n6. ���������� ������.\n������� ����� ������� -> ";
		std::cin >> m;
		switch (m) {
		case 1: std::cout << "\n������� ����� �����(1 - 3) -> "; std::cin >> l; show_book(arr_book[l - 1]);
			continue;
		case 2: std::cout << "\n������� ����� �����(1 - 3), ����� ������� ������� ������ -> "; std::cin >> l; std::cout << "����� " << l + 1 << " �����: " << author_name(arr_book[l - 1]) << "\n\n";
			continue;
		case 3: std::cout << "\n������� ����� �����(1 - 3), ����� ���������� � ��� ����� ���� �������� � ���� -> "; std::cin >> l; save_book(arr_book[l - 1], "file.txt"); std::cout << "����� ������� �������� � ����.\n\n";
			continue;
		case 4: add_book(arr_book, n); continue;
		case 5: clear_arr(arr_book, n); std::cout << "\n";	continue;
		case 6: std::cout << "\n�������� ������...\n\n"; break;
		default: std::cout << "\n��� ����� �������!\n\n"; continue;
		}
	} while (m != 6);


	return 0;
}