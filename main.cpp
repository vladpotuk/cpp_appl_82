#include <iostream>
#include "Book.h"

int main() {
    system("chcp 1251");
    system("cls");
    
    Book books[] = {
        Book("Автор1", "Назва1", "Видавництво1", 2020, 300),
        Book("Автор2", "Назва2", "Видавництво2", 2018, 250),
        Book("Автор1", "Назва3", "Видавництво1", 2022, 400),
        
    };

    
    std::string targetAuthor = "Автор1";
    std::cout << "Книги автора " << targetAuthor << ":\n";
    for (const auto& book : books) {
        if (book.getAuthor() == targetAuthor) {
            std::cout << "Назва: " << book.getTitle() << ", Рік: " << book.getYear() << "\n";
        }
    }

    
    std::string targetPublisher = "Видавництво1";
    std::cout << "\nКниги видавництва " << targetPublisher << ":\n";
    for (const auto& book : books) {
        if (book.getPublisher() == targetPublisher) {
            std::cout << "Назва: " << book.getTitle() << ", Рік: " << book.getYear() << "\n";
        }
    }

    
    int targetYear = 2019;
    std::cout << "\nКниги, випущені після " << targetYear << " року:\n";
    for (const auto& book : books) {
        if (book.getYear() > targetYear) {
            std::cout << "Назва: " << book.getTitle() << ", Рік: " << book.getYear() << "\n";
        }
    }

    return 0;
}
