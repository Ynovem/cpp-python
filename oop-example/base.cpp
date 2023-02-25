#include "base.h"

Base::Base(unsigned int id): id(id) {}

void Base::setName(std::string name)
{
	this->name = std::move(name);
}

std::string Base::getName() const
{
	return name;
}

unsigned int Base::getId() const
{
	return id;
}
