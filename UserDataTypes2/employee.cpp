#include "employee.h"

using namespace std;

const float employee::TAX = 0.01f;

void employee::Read()
{
	cout << "Enter name: ";
	cin >> name;
	
	cout << "Enter age: ";
	cin >> age;

	cout << "Enter zipcode: ";
	cin >> zipcode;

	cout << "Enter wage: ";
	cin >> wage;

	cout << "Enter Hours Worked: ";
	cin >> hoursWorked;
}

void employee::Write()
{
	cout << "\n";
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Zipcode: " << zipcode << endl;
	cout << "Wage: " << wage << endl;
	cout << "Hours Worked: " << hoursWorked << endl;

	float gross = hoursWorked * wage;
	float net = gross - (gross * TAX);

	cout << "Weekly Gross Pay: " << gross << endl;
	cout << "Weekly Net Pay: " << net << endl;
	cout << "Yearly Gross Pay: " << gross*12 << endl;
	cout << "Yearly Net Pay: " << net*12 << endl;
}