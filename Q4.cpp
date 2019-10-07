#include <iostream>

using namespace std;

int main()
{
    string userin;
    int count = 0;
    cout << "Enter a number: ";
    cin >> userin;
    
    if(cin.fail()) //Used http://www.cplusplus.com/forum/beginner/26821/
    {
        cin.clear();
        cin.ignore();
        cout << "Incorrect input." << endl;
        return false;
    }

    for (int i = 0; i < userin.length(); i++)
    {
        if (userin[i] != userin[userin.length() - i - 1])
        {
            count ++;
        }
    }
    
    if (count != 0)
    {
        cout << "The number " << userin << " is not a palindrome." << endl;
    }
    else
    {
        cout << "The number " << userin << " is a palindrome." << endl;
    }
    
    return 1;
}