#include <iostream>
#include "patient.h"

// Note:: Meyer's Singleton pattern, need at least c++11 standard
Patient& Patient::getInstance()
{
	static Patient instance;
	std::cout << "Patient::getInstance(): " << &instance << "\n";
	return instance;
}

void Patient::setName(std::string name)
{
	data.setName(std::move(name));
}

void Patient::setAge(int age)
{
	data.setAge(age);
}

Data Patient::getData()
{
	return data;
}
