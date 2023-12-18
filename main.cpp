#include <iostream>
#include "Book.h"

int main() {
    system("chcp 1251");
    system("cls");
    
    Book books[] = {
        Book("�����1", "�����1", "�����������1", 2020, 300),
        Book("�����2", "�����2", "�����������2", 2018, 250),
        Book("�����1", "�����3", "�����������1", 2022, 400),
        
    };

    
    std::string targetAuthor = "�����1";
    std::cout << "����� ������ " << targetAuthor << ":\n";
    for (const auto& book : books) {
        if (book.getAuthor() == targetAuthor) {
            std::cout << "�����: " << book.getTitle() << ", г�: " << book.getYear() << "\n";
        }
    }

    
    std::string targetPublisher = "�����������1";
    std::cout << "\n����� ����������� " << targetPublisher << ":\n";
    for (const auto& book : books) {
        if (book.getPublisher() == targetPublisher) {
            std::cout << "�����: " << book.getTitle() << ", г�: " << book.getYear() << "\n";
        }
    }

    
    int targetYear = 2019;
    std::cout << "\n�����, ������� ���� " << targetYear << " ����:\n";
    for (const auto& book : books) {
        if (book.getYear() > targetYear) {
            std::cout << "�����: " << book.getTitle() << ", г�: " << book.getYear() << "\n";
        }
    }

    return 0;
}
