#pragma once

#include <string>

class Base {
	public:
		explicit Base(unsigned int id);

		void setName(std::string name);

		std::string getName() const;
		unsigned int getId() const;

	protected:
		unsigned int id;
		std::string name;
};
