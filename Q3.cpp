#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num1, num2, hamdis, quot1[6], quot2[6], remain1[6] = {0,0,0,0,0,0}, remain2[6] = {0,0,0,0,0,0}, i = 1;

    cout << "Enter two numbers 0-100: ";
    cin >> num1;
    //Checking if input is an integer
    if (cin.fail()) //Used http://www.cplusplus.com/forum/beginner/26821/
	{
		cin.clear();
		cin.ignore(); 
		cout << "Incorrect input." << endl;
        return 1;
    }
    //Checking if number is between 1 and 100
    else if (num1 < 0 || num1 > 100)
    {
        cout << "Incorrect input." << endl;
        return 1;
    }

    cin >> num2;
    if (cin.fail())
	{
		cin.clear();
		cin.ignore(); 
		cout << "Incorrect input." << endl;
        return 1;
    }
    else if (num2 < 0 || num2 > 100)
    {
        cout << "Incorrect input." << endl;
        return 1;
    }
    
    if (num1 == num2)
    {
        hamdis = 0;
    }
    else
    {
        quot1[0] = num1 / 3;
        remain1[0] = num1 % 3;
        quot2[0] = num2 / 3;
        remain2[0] = num2 % 3;

        while (quot1[i-1] != 0)
        {
            quot1[i] = quot1[i-1] / 3;
            remain1[i] = quot1[i-1] % 3;

            i++;
        }

        i = 1;
        while (quot2[i-1] != 0)
        {
            quot2[i] = quot2[i-1] / 3;
            remain2[i] = quot2[i-1] % 3;

            i++;
        }

        for (i = 0; i <= 5; i++)
        {
            if (remain1[i] != remain2[i])
            {
                hamdis ++;
            }
        }
    }

    cout << "Hamming distance between " << num1 << " and " << num2;
    cout << " when numbers are in ternary format is: " << hamdis << endl;
    return 1;
}