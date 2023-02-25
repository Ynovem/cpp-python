#pragma once


#include "base.h"

class Data: public Base {
	public:
		Data();

		void setAge(int age);

		int getAge() const;

	protected:
		int age;
};
