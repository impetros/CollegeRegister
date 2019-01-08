#pragma once
#include "Room.h"
#include "Repository.h"
#include<vector>

class RoomRepository : public Repository<Room>
{
public:
	Room* findByName(std::string);
};