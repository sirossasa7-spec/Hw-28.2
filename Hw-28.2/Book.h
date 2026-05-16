#pragma once
#include <string>
using namespace std;

class Book {
protected:
    string author;
    string edition;
    string publicationDate;
    long isbn;

public:
    Book(string a, string e, string date, long i);

    void showBook() const;
};