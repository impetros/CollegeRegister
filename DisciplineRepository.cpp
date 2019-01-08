#include "DisciplineRepository.h"

Discipline* DisciplineRepository::findBySubject(std::string name)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getLesson() == name)
			return mEntities[i];
	return 0;
}

Discipline* DisciplineRepository::findByType(std::string type)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getClassroom() == type)
			return mEntities[i];
	return 0;
}
