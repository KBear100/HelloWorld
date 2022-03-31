#include <iostream>
#include <string>

using namespace std;

namespace gamett 
{
    int i = 10;
}

int main()
{
    string name;
    char initial;
    unsigned int age;
    bool isAdult = 0;
    unsigned int zipcode;
    float wage;
    int daysWorked;
    int hoursWorkedPerDay[6];

    const float TAX = 0.1f;
    int totalHours = 0;
    int grossIncome;
    int netIncome;

    cout << "Enter First Name: ";
    cin >> name;
    
    cout << "Enter Last Initial: ";
    cin >> initial;

    cout << "Enter Age: ";
    cin >> age;

    if (age >> 18) isAdult = true;

    cout << "Enter Zipcode: ";
    cin >> zipcode;

    cout << "Enter Wage: ";
    cin >> wage;

    cout << "Enter Days Worked: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++)
    {
        cout << "Enter Hours Worked for day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];

        totalHours = totalHours + hoursWorkedPerDay[i];
    }

    grossIncome = totalHours * wage;
    netIncome = grossIncome - TAX * grossIncome;

    cout << name << " worked " << totalHours << " for " << wage << " an hour.\n";

    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;
}