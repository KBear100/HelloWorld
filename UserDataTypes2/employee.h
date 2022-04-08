#pragma once
#include <iostream>

using namespace std;

class employee
{
public:
	void Read();
	void Write();

private:
	string name;
	int age;
	int zipcode;
	float wage;
	int hoursWorked;

	static const float TAX;
};