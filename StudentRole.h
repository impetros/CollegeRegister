#pragma once
#include "Role.h"
#include "StudyGroup.h"
#include <string>

class StudentRole : public Role
{
public:
	StudentRole(int, std::string, StudyGroup* group);
	StudentRole() : Role(STUDENT_ROLE) {};
	void setID(int);
	void setDomain(std::string);

	int getID();
	std::string getDomain();

private:
	int mID;
	std::string mDomain;
	StudyGroup* mGroup;
};