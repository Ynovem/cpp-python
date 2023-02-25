#include "data.h"

Data::Data(): Base(rand()%1000) {}

void Data::setAge(int age) {
	this->age = age;
}

int Data::getAge() const {
	return age;
}
