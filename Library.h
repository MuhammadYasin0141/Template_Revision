#pragma once
#include "Book.h"
#include "Newspaper.h"

template <typename T>
int linearSearch(T arr[], int size, const T& key)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

template <typename T>
int binarySearch(T arr[], int size, const T& key)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

class Library
{
    Book books[50];
    Newspaper newspapers[50];
    int bookCount;
    int newsCount;

public:
    Library();

    void addBook(const Book& b);
    void addNewspaper(const Newspaper& n);

    void displayCollection() const;

    void sortBooksByPages();
    void sortNewspapersByEdition();

    Book* searchBookByTitle(string title);
    Newspaper* searchNewspaperByName(string name);


};