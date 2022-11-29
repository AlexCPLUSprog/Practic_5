#pragma once

#include <iostream>
#include <string>
#include <fstream>

struct book {
	std::string name_book;
	std::string author;
	int year_publish = 0;
	int pages = 0;
	int price = 0;
};

void show_book(book& B);

std::string author_name(book& A);

void save_book(book& S, std::string path);

void clear_arr(book* C, int size);

void add_book(book* D, const int length);
