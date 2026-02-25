#include "Library.h"

int main()
{
    Book book1("The Catcher in the Rye", "J.D. Salinger", 277);
    Book book2("To Kill a Mockingbird", "Harper Lee", 324);

    Newspaper newspaper1("Washington Post", "2024-10-13", "Morning Edition");
    Newspaper newspaper2("The Times", "2024-10-12", "Weekend Edition");

    Library library;

    library.addBook(book1);
    library.addBook(book2);
    library.addNewspaper(newspaper1);
    library.addNewspaper(newspaper2);

    cout << "- Before Sorting:" << endl;
    library.displayCollection();

    library.sortBooksByPages();
    library.sortNewspapersByEdition();

    cout << endl << "- After Sorting:" << endl;
    library.displayCollection();

    Book* foundBook = library.searchBookByTitle("The Catcher in the Rye");
    if (foundBook)
    {
        cout << endl << "- Found Book:" << endl;
        foundBook->display();
    }
    else
        cout << endl << "- Book not found." << endl;

    Newspaper* foundNewspaper = library.searchNewspaperByName("The Times");
    if (foundNewspaper)
    {
        cout << endl << "- Found Newspaper:" << endl;
        foundNewspaper->display();
    }
    else
        cout << endl << "- Newspaper not found." << endl;

    return 0;
}