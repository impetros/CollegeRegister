#include "Activity.h"

Activity::Activity(Room *a, Person *b, std::string c) 
{
	mLocation = a;
	mOwner = b;
	mDescription = c;
}

Room* Activity::getLocation()
{
	return mLocation;
}

Room* Activity::getRoom() const
{
	return mLocation;
}

Person* Activity::getOwner()
{
	return mOwner;
}

std::string Activity::getDescription() const
{
	return mDescription;
}

std::istream& operator>>(std::istream& in, Activity& ob)
{
	in >> *dynamic_cast<Room*>(ob.mLocation);
	in >> *dynamic_cast<Person*>(ob.mOwner);
	in >> ob.mDescription;
	return in;
}

std::ostream& operator<<(std::ostream& out, const Activity& ob)
{
	out << ob.mDescription << " - ";
	out << *dynamic_cast<Room*> (ob.mLocation);
	out << *dynamic_cast<Person*> (ob.mOwner);
	return out;
}