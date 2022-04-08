#include "employee.h"
#include <iostream>

using namespace std;

int main()
{
    employee employees[5];

    int numEmployees;
    cout << "Number of Employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) employees[i].Read();
    for (int i = 0; i < numEmployees; i++) employees[i].Write();
}