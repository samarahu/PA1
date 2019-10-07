#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string grade;
    double pts;
    double GPA = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Class " << i << " ";
        cin >> grade;
        if (grade == "A")
            pts = 4.0;
        else if (grade == "A-")
            pts = 3.7;
        else if (grade == "B+")
            pts = 3.3;
        else if (grade == "B")
            pts = 3.0;
        else if (grade == "B-")
            pts = 2.7;
        else if (grade == "C+")
            pts = 2.3;
        else if (grade == "C")
            pts = 2.0;
        else if (grade == "C-")
            pts = 1.7;
        else if (grade == "D")
            pts = 1.0;
        else if (grade == "F")
            pts = 0.0;
        else
        {
            cout << "Incorrect input!" << endl;
            return 1;
        }

        GPA = GPA + pts;
    }

    GPA = GPA/5;
    cout << "GPA: ";
    std::cout << std::fixed << std::setprecision(2) << GPA << endl;
    return 1;
}