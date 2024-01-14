#include <iostream>

using std::cout;
using std::endl;

#include "GradeBook.h"

// Construtor
GradeBook::GradeBook(string name)
{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
    courseName = name;
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the Grade Book for " << getCourseName() << "! " << endl;
}