#include "Book.h"
#include <iostream>

Book::Book(string a, string e, string date, long i) {
    author = a;
    edition = e;
    publicationDate = date;
    isbn = i;
}

void Book::showBook() const {
    cout << "=== Book ===\n";
    cout << "Author: " << author << endl;
    cout << "Edition: " << edition << endl;
    cout << "Publication date: " << publicationDate << endl;
    cout << "ISBN: " << isbn << endl;
}