#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    char initial;
    unsigned short age;
    bool isAdult = 0;
    unsigned int zipcode;
    float wage;
    unsigned short daysWorked;
    unsigned short hoursWorkedPerDay[7];

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

    if (age >= 18) isAdult = true;

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