#include "PersonRepository.h"

Person *PersonRepository::findByFullName(std::string a, std::string b)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getLastName() == a && mEntities[i]->getFirstName() == b)
			return mEntities[i];
	return 0;
}

Person *PersonRepository::findByCNP(std::string a)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getCNP() == a)
			return mEntities[i];
	return 0;
}
