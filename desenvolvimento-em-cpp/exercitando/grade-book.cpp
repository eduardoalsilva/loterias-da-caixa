#include <iostream>
#include <string>

using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;

class GradeBook
{
    public:
        void setCourseName(string name)
        {
            courseName = name;
        }

        string getCourseName()
        {
            return courseName;
        }

        void displayMessage()
        {
            cout << "Welcome to the Grade Book for " << getCourseName() << "! " << endl;
        }

    private:
        string courseName;

};

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    cout << "Please enter the course name: " << endl;
    getline(cin, nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse);

    cout << endl;
    myGradeBook.displayMessage();
    return 0;
}