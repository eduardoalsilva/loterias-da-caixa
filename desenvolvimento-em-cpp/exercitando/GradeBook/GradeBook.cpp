#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include "GradeBook.h"

// Construtor
GradeBook::GradeBook(string name)
{
    setCourseName(name);
    studentMaximum = 0;
}


void GradeBook::setCourseName(string name)
{
    if (name.length() <= 25)
        courseName = name;
    else
    {
        courseName = name.substr(0, 25);
        cout << "Name \"" << name << "\" exceeds maximum length(25).\n" << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the Grade Book for " << getCourseName() << "! " << endl;
}

void GradeBook::inputGrades()
{
    int grade1;
    int grade2;
    int grade3;

    cout << "Enter the integer grades.";
    cin >> grade1 >> grade2 >> grade3;

    studentMaximum = maximum(grade1, grade2, grade3);
}

int GradeBook::maximum(int x, int y, int z)
{
    int maximumValue = x;

    if (y > maximumValue)
        maximumValue = y;

    if (z > maximumValue)
        maximumValue = z;

    return maximumValue;
}

void GradeBook::displayGradeReport()
{
    cout << "Maximum of grades entered: " << studentMaximum << endl;
}