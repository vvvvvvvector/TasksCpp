#include <iostream>
#include <string>
#include <fstream>

struct Book
{
    int pages;
    std::string author;
    std::string title;
};

void write_book(const Book &book, const char *path)
{
    std::fstream file;
    file.open(path, std::ios::app);

    if (file.is_open())
    {
        file << book.author << "," << book.title << "," << book.pages << std::endl;
        file.close();
    }
}

void read_books(const char *path, Book *books, int size)
{
    std::fstream file;
    file.open(path, std::ios::in);

    if (file.is_open())
    {
        for (int i = 0; i < size && file.good(); i++)
        {
            std::string str;
            file >> str;
            int n = str.find(',');
            books[i].author = str.substr(0, n);
            int n1 = str.find(',', n + 1);
            books[i].title = str.substr(n + 1, n1 - n - 1);
            int n2 = str.find('\n');
            books[i].pages = stoi(str.substr(n1 + 1, n2 - n1 - 1));
        }
        file.close();
    }
}

std::ostream &operator<<(std::ostream &os, Book &b)
{
    os << "Author: " << b.author << " Title: " << b.title << " Pages: " << b.pages << std::endl;
    return os;
}

int main()
{
    Book book1;
    Book book2;
    Book book3;

    const int size = 3;
    Book books[size];

    book1.author = "author1";
    book1.title = "title1";
    book1.pages = 123;

    book2.author = "author2";
    book2.title = "title2";
    book2.pages = 565;

    book3.author = "author3";
    book3.title = "title3";
    book3.pages = 1337;

    //write_book(book1, "books.dat");
    //write_book(book2, "books.dat");
    //write_book(book3, "books.dat");

    read_books("books.dat", books, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << books[i];
    }

    return 0;
}