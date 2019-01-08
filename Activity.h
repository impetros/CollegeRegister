#pragma once
#include <string>
#include "Room.h"
#include "Person.h"

class Activity
{
public:
	Activity(Room*, Person*, std::string);
	Activity() {};
	Room* getRoom() const;
	Room *getLocation();
	Person *getOwner();
	std::string getDescription() const;
	friend std::istream& operator>>(std::istream& in, Activity& ob);
	friend std::ostream& operator<<(std::ostream& out, const Activity& ob);
protected:
	Room *mLocation;
	Person *mOwner;
	std::string mDescription;
};