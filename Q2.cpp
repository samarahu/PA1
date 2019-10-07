#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 double xcoord1, xcoord2, ycoord1, ycoord2, area1, area2;

 cout << "Enter the information for the first square" << endl;
 cout << "x-coordinate: ";
 cin >> xcoord1;
 if (cin.fail()) //Used http://www.cplusplus.com/forum/beginner/26821/
 {
     cin.clear();
     cin.ignore();
     cout << "Incorrect input." << endl;
     return 1;
 }

 cout << "y-coordinate: ";
 cin >> ycoord1;
 if (cin.fail()) 
 {
     cin.clear();
     cin.ignore();
     cout << "Incorrect input." << endl;
     return 1;
 }

 cout << "area: ";
 cin >> area1;
 if (cin.fail()) 
 {
     cin.clear();
     cin.ignore();
     cout << "Incorrect input." << endl;
     return 1;
 }
 else if (area1 <= 0)
 {
     cout << "Incorrect input." << endl;
     return 1;
 }

 cout << "Enter the information for the second square" << endl;
 cout << "x-coordinate: ";
 cin >> xcoord2;
 if (cin.fail()) 
 {
     cin.clear();
     cin.ignore();
     cout << "Incorrect input." << endl;
     return 1;
 }

 cout << "y-coordinate: ";
 cin >> ycoord2;
 if (cin.fail()) 
 {
     cin.clear();
     cin.ignore();
     cout << "Incorrect input." << endl;
     return 1;
 }

 cout << "area: ";
 cin >> area2;
 if (cin.fail()) 
 {
     cin.clear();
     cin.ignore();
     cout << "Incorrect input." << endl;
     return 1;
 }
 else if (area2 <= 0)
 {
     cout << "Incorrect input." << endl;
     return 1;
 }

 if (xcoord1 == xcoord2 && ycoord1 == ycoord2)
 {
    cout << "THE SQUARES INTERSECT" << endl;
 }
 else if (xcoord1 < xcoord2 && ycoord1 < ycoord2)
 {
    if (xcoord1 + sqrt(area1) >= xcoord2 || ycoord1 - sqrt(area1) >= ycoord2)
    {
        cout << "THE SQUARES INTERSECT" << endl;
    }
    else
    {
        cout << "THE SQUARES DO NOT INTERSECT" << endl;    /* code */
    }
 }
 else if (xcoord1 > xcoord2 && ycoord1 > ycoord2)
 {
    if (xcoord2 + sqrt(area2) >= xcoord1 || ycoord2 - sqrt(area2) >= ycoord1)
    {
        cout << "THE SQUARES INTERSECT" << endl;
    }
    else
    {
        cout << "THE SQUARES DO NOT INTERSECT" << endl;    /* code */
    }
 }
 else if (xcoord1 < xcoord2 && ycoord1 > ycoord2)
 {
      if (xcoord1 + sqrt(area1) >= xcoord2 || ycoord2 - sqrt(area2) >= ycoord1)
      {
          cout << "THE SQUARES INTERSECT" << endl;
      }
      else
    {
        cout << "THE SQUARES DO NOT INTERSECT" << endl;    /* code */
    }
 }
 else if (xcoord1 > xcoord2 && ycoord1 < ycoord2)
 {
     if (xcoord2 + sqrt(area2) >= xcoord1 || ycoord1 - sqrt(area1) >= ycoord2)
     {
         cout << "THE SQUARES INTERSECT" << endl;
     }
     else
     {
        cout << "THE SQUARES DO NOT INTERSECT" << endl;    /* code */
     }
 }
 else
 {
    cout << "THE SQUARES DO NOT INTERSECT" << endl;
 }

 return 1;
}