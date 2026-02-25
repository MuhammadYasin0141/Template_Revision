#pragma once
#include <iostream>
using namespace std;

class Publication
{

public:
    virtual void display() const = 0;
    virtual ~Publication() {}

};