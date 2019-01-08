#include "Discipline.h"

Discipline::Discipline(std::string s, std::string t, std::vector<Activity*> a)
{
	mLesson = s;
	mClassroom = t;
	mActivities = a;
}

std::string Discipline::getLesson()
{
	return mLesson;
}

std::string Discipline::getClassroom()
{
	return mClassroom;
}

void Discipline::setLesson(std::string name)
{
	mLesson = name;
}

void Discipline::setClassroom(std::string type)
{
	mClassroom = type;
}

std::istream& operator>>(std::istream& in, Discipline& ob)
{
	in >> ob.mLesson;
	in >> ob.mClassroom;
	return in;
}

std::ostream& operator<<(std::ostream& out, const Discipline& ob)
{
	out << ob.mLesson;
	out << ob.mClassroom;
	return out;
}