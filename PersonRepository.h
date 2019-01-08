#pragma once
#include "Repository.h"
#include "Person.h"
#include <vector>

class PersonRepository : public Repository<Person>
{
public:
	Person* findByFullName(std::string, std::string);
	Person* findByCNP(std::string);
};