#pragma once

#include "Activity.h"
#include <string>
#include <vector>

class Discipline
{
public:
	Discipline() {};
	Discipline(std::string s, std::string t, std::vector<Activity*> a);
	std::string getLesson();
	std::string getClassroom();
	void setLesson(std::string);
	void setClassroom(std::string);
	friend std::istream& operator>>(std::istream& in, Discipline& ob);
	friend std::ostream& operator<<(std::ostream& out, const Discipline& ob);
private:
	std::string mLesson;
	std::string mClassroom;
	std::vector<Activity*> mActivities;
	int mPresences;
};