#include <iostream>
#include <string>

class Author {
protected:
    std::string author_name;

public:
    Author(const std::string& author) : author_name(author) {}

    void displayAuthor() {
        std::cout << "Author: " << author_name << std::endl;
    }
};

class Book {
protected:
    std::string title;
    std::string isbn;

public:
    Book(const std::string& bookTitle, const std::string& bookISBN)
        : title(bookTitle), isbn(bookISBN) {}

    void displayBook() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "ISBN: " << isbn << std::endl;
    }
};

class BookInfo : public Author, public Book {
private:
    std::string genre;

public:
    BookInfo(const std::string& author, const std::string& bookTitle, const std::string& bookISBN, const std::string& bookGenre)
        : Author(author), Book(bookTitle, bookISBN), genre(bookGenre) {}

    void displayBookInfo() {
        displayAuthor();
        displayBook();
        std::cout << "Genre: " << genre << std::endl;
    }
};

int main() {
    BookInfo bookInfo("colleen hoover", "it ends with us", "978-1234567890", "Fiction");
    bookInfo.displayBookInfo();
    return 0;
}

/*ubuntu@ubuntu-OptiPlex-3010:~$ ./a.out
Author: colleen hoover
Title: it ends with us
ISBN: 978-1234567890
Genre: Fiction*\

