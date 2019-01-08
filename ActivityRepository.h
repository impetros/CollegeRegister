#pragma once

#include "Activity.h"
#include "Repository.h"

class ActivityRepository : public Repository<Activity>
{
public:
	Activity* findByOwner(Person*);
	Activity* findByLocation(Room*);
	Activity* findByDescription(std::string);
};