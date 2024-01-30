#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include "GradeBook.h"

// Construtor
GradeBook::GradeBook(string name)
{
    setCourseName(name);
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
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
    int grade;

    cout << "Enter the letter grades." << endl << "Enter the EOF character to end input." << endl;

    while ((grade = cin.get()) != EOF)
    {
        switch (grade)
        {
            case 'A':
            case 'a':
                aCount++;
                break;

            case 'B':
            case 'b':
                bCount++;
                break;

            case 'C':
            case 'c':
                cCount++;
                break;

            case 'D':
            case 'd':
                dCount++;
                break;

            case 'F':
            case 'f':
                fCount++;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                cout << "Incorrect letter grade entered." << "Enter a new grade." << endl;
                break;
        }
    }
}

void GradeBook::displayGradeReport()
{
    cout << "\n\nNumber of students who received each letter grade:"
    << "\nA: " << aCount
    << "\nB: " << bCount
    << "\nC: " << cCount
    << "\nD: " << dCount
    << "\nF: " << fCount
    << endl;
}