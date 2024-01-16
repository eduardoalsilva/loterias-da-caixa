#include "GradeBook.h"

int main()
{
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    gradeBook1.displayMessage();
    gradeBook1.determineClassAverage();

    return 0;
}