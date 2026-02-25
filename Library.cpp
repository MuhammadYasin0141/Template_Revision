#include "Library.h"

Library::Library() : bookCount(0), newsCount(0) {}

void Library::addBook(const Book& b)
{
    books[bookCount++] = b;
}

void Library::addNewspaper(const Newspaper& n)
{
    newspapers[newsCount++] = n;
}

void Library::displayCollection() const
{
    for (int i = 0; i < bookCount; i++)
        books[i].display();

    for (int i = 0; i < newsCount; i++)
        newspapers[i].display();
}

void Library::sortBooksByPages()
{
    for (int i = 0; i < bookCount - 1; i++)
        for (int j = i + 1; j < bookCount; j++)
            if (books[j] < books[i])
                swap(books[i], books[j]);
}

void Library::sortNewspapersByEdition()
{
    for (int i = 0; i < newsCount - 1; i++)
        for (int j = i + 1; j < newsCount; j++)
            if (newspapers[j] < newspapers[i])
                swap(newspapers[i], newspapers[j]);
}

Book* Library::searchBookByTitle(string title)
{
    for (int i = 0; i < bookCount; i++)
        if (books[i] == title)
            return &books[i];
    return nullptr;
}

Newspaper* Library::searchNewspaperByName(string name)
{
    for (int i = 0; i < newsCount; i++)
        if (newspapers[i] == name)
            return &newspapers[i];
    return nullptr;

}