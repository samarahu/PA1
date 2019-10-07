#include <iostream>

using namespace std;

int main()
{
    char letr;
    int option, i;

    cout << "Enter char, operation:";
    cin >> letr;
    //Checking if input is a character
    if(cin.fail()) //Used http://www.cplusplus.com/forum/beginner/26821/
	{
		cin.clear();
		cin.ignore(); 
		cout << "Result: Illegal char" << endl;
        return 1;
    }

    cin >> option;
    //Checking if input is a integer
    if(cin.fail()) 
	{
		cin.clear();
		cin.ignore(); 
		cout << "Result: Illegal operation" << endl;
        return 1;
    }

    switch (option)
    {
        //Option 1
        case 1: if (int(letr) >= 97 && int(letr) <= 122)
            {
                //Changing to lowercase
                letr = char(int(letr) - 32);
            }  
            else if (int(letr) <= 90 && int(letr) >= 65)
            {
                //Changing to uppercase
                letr = char(int(letr) + 32);
            }
            else
            {
                //If character is not a letter
                cout << "Result: Illegal char" << endl;
                return 1;
            }
            break;

        //Option 2
        case 2: if (int(letr) >= 97 && int(letr) <= 122)
            {
                i = 122 - int(letr);
                i = 25 - i;
                i = 122 - i;
                letr = char(i - 32);
            }
            else if (int(letr) <= 90 && int(letr) >= 65)
            {
                i = 90 - int(letr);
                i = 25 - i;
                i = 90 - i;
                letr = char(i + 32);
            }
            else
            {
                cout << "Result: Illegal char" << endl;
                return 1;
            }
            break;
        
        //Option 3
        case 3: if (int(letr) >= 97 && int(letr) <= 116)
            {
                letr = char(int(letr) + 6);
            }
            else if (int(letr) <= 84 && int(letr) >= 65)
            {
                i = int(letr) - 65;
                i = 26 - i;
                letr = char(int(letr) + 6);
            }
            else if (int(letr) > 84 && int(letr) <= 90)
            {
                i = 90 - int(letr);
                i = i + 6;
                letr = char(i + 97);
            }
            else if (int(letr) > 116 && int(letr) <= 122)
            {
                i = 90 - int(letr);
                i = i + 6;
                letr = char(i + 65);
            }
            else
            {
                cout << "Result: Illegal char" << endl;
                return 1;
            }
            break;
        
        default: cout << "Result: illegal operation" << endl;
            return 1;
    }

    //Printing result
    cout << "Result: " << letr << endl;

    return 1;
}