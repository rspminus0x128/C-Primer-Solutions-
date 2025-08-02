#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t t = time(NULL);           // Get current time
    tm* tPtr = localtime(&t);        // Convert to local time structure

    cout << "\n\nDisplay the Current Date and Time :\n";
    cout << "----------------------------------------\n";

    cout << "seconds = " << tPtr->tm_sec << endl;
    cout << "minutes = " << tPtr->tm_min << endl;
    cout << "hours = " << tPtr->tm_hour << endl;
    cout << "day of month = " << tPtr->tm_mday << endl;
    cout << "month of year = " << (tPtr->tm_mon + 1) << endl;   // +1 because tm_mon is 0-based
    cout << "year = " << (tPtr->tm_year + 1900) << endl;        // +1900 to convert from 1900
    cout << "weekday = " << tPtr->tm_wday << endl;
    cout << "day of year = " << tPtr->tm_yday << endl;
    cout << "daylight savings = " << tPtr->tm_isdst << endl;

    cout << "\nCurrent Date: " 
         << tPtr->tm_mday << "/" 
         << (tPtr->tm_mon + 1) << "/" 
         << (tPtr->tm_year + 1900) << endl;

    cout << "Current Time: " 
         << tPtr->tm_hour << ":" 
         << tPtr->tm_min << ":" 
         << tPtr->tm_sec << endl;

    return 0;
}
