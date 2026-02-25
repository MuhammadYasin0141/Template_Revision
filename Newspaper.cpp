#include "Newspaper.h"

Newspaper::Newspaper() {}

Newspaper::Newspaper(string n, string d, string e)
    : name(n), date(d), edition(e) {
}

string Newspaper::getName() const
{ 
    return name; 
}

string Newspaper::getEdition() const { 
    return edition; 
}

void Newspaper::display() const
{
    cout << "- Newspaper: " << name << ", Date: " << date
        << ", Edition: " << edition << endl;
}

bool Newspaper::operator==(const string& n) const
{
    return name == n;
}

bool Newspaper::operator<(const Newspaper& other) const
{
    return edition < other.edition;
}