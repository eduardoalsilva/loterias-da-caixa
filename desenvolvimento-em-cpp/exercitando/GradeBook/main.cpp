#include "GradeBook.h"

int main()
{
    int gradesArray[GradeBook::students] = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    GradeBook gradeBook1("CS101 Introduction to C++ Programming", gradesArray);
    GradeBook gradeBook2("CS102 Data Structures in C++", gradesArray);

    gradeBook1.displayMessage();
    gradeBook1.processGrades();
    return 0;
}