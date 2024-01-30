#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "GradeBook.h"

// Construtor
GradeBook::GradeBook(string name)
{
    setCourseName(name);
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

void GradeBook::determineClassAverage()
{
    int total;
    int gradeCounter;
    int grade;
    double average;

    total = 0;
    gradeCounter = 0;

    cout << "Enter grade or -1 to quit: ";
    cin >> grade;

    while (grade != -1)
    {
        total = total + grade;
        gradeCounter = gradeCounter + 1;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    if (gradeCounter != 0)
    {
        average = static_cast<double>(total)/gradeCounter;

        cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
        cout << "Class average is " << setprecision(20) << fixed << average << endl;
    }

    else
        cout << "No grade were entered" << endl;
}



void GradeBook::inputGrades()
{
    int grade1;
    int grade2;
    int grade3;

    cout << "Enter three integer grades: ";
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