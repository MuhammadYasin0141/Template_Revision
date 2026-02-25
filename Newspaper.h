#pragma once
#include "Publication.h"
#include <string>
using namespace std;

class Newspaper : public Publication
{
    string name;
    string date;
    string edition;

public:
    Newspaper();
    Newspaper(string n, string d, string e);

    string getName() const;
    string getEdition() const;

    void display() const override;

    bool operator==(const string& n) const;
    bool operator<(const Newspaper& other) const;

};