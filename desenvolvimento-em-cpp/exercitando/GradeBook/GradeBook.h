#include <string>

using std::string;

class GradeBook
{
    public:

        GradeBook(string);
        void setCourseName(string);
        string getCourseName();
        void displayMessage();
        void inputGrades();
        void determineClassAverage();
        void displayGradeReport();
        int maximum(int, int, int);
        
    private:
        string courseName;
        int studentMaximum;
};

// página 314