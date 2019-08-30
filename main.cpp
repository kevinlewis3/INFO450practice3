#include <iostream>
using namespace std;

int main() {

    int year;

    for(year=1; year!=0;)
    {
        cout << "please enter a 4 digit year" << endl;
        cin >> year;
        if (year % 4 == 0)
        {
            if( (year % 100 == 0) && (year % 400 !=0 ))
            {
                cout << "not a leap year! " <<endl;
            } else
            {
                cout << "LEAP Year" <<endl;
            }
        }
        else
        {
            cout << "not a leap year!" <<endl;
        }
    }


    return 0;
}