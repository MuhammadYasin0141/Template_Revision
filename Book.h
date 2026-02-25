#pragma once
#include "Publication.h"
#include <string>
using namespace std;

class Book : public Publication
{
    string title;
    string author;
    int pages;

public:
    Book();
    Book(string t, string a, int p);

    string getTitle() const;
    int getPages() const;

    void display() const override;

    bool operator==(const string& t) const;
    bool operator<(const Book& other) const;

};