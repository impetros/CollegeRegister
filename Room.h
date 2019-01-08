#pragma once
#include <string>

class Room
{
public:
	Room(std::string);
	Room() {}
	std::string getName();
	friend std::istream& operator>>(std::istream& in, Room& ob);
	friend std::ostream& operator<<(std::ostream& out, const Room& ob);
protected:
	std::string mName;
};