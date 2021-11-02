#include <iostream>
#include <string>
using namespace std;

int main()
// above 70 is A
// 60 to 69 is B
// 50 to 59 is C
// 40 to 49 is D
// below 40 is F
{
    //initialize and declared varible
    string name = "";
    float grade = 0;

    cout << "Grading System\n";
    cout << "Please enter the name of the student:\n";
    getline(cin, name);
    cout << "Please enter the student's marks:\n";
    cin >> grade;

    if (grade >= 70)
    {
        cout << name << " has scored an A\n";
    }
    else if (grade >= 60 && grade <= 69)
    {
        cout << name << " has scored an B\n";
    }
    else if (grade >= 50 && grade <= 59)
    {
        cout << name << " has scored an C\n";
    }
    else if (grade >= 40 && grade <= 49)
    {
        cout << name << " has scored an D\n";
    }
    else if (grade < 40)
    {
        cout << name << " has scored an F\n";
    }
    else
    {
        cout << "error try again\n";
    }
    return 0;
}