#include "Room.h"

Room::Room(std::string a)
{
	mName = a;
}

std::string Room::getName()
{
	return mName;
}

std::istream& operator>>(std::istream& in, Room& ob)
{
	in >> ob.mName;
	return in;
}

std::ostream& operator<<(std::ostream& out, const Room& ob)
{
	out << ob.mName << '\n';
	return out;
}