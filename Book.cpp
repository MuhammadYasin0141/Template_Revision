#include "Book.h"

Book::Book() {}

Book::Book(string t, string a, int p) : title(t), author(a), pages(p) {}

string Book::getTitle() const 
{ 
    return title; 
}

int Book::getPages() const 
{ 
    return pages; 
}

void Book::display() const
{
    cout << "- Book: " << title << ", Author: " << author
        << ", Pages: " << pages << endl;
}

bool Book::operator==(const string& t) const 
{
    return title == t;
}

bool Book::operator<(const Book& other) const
{

    return pages < other.pages;

}