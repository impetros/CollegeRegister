#pragma once
#include "Discipline.h"
#include <vector>
#include <string>

class StudyGroup
{
public:
	StudyGroup() {};
	StudyGroup(int, std::vector<Discipline*> Disciplines);
	void setGroup(int);
	int getGroup();
	std::vector<Discipline*> getDisciplines();
	std::vector<float> getGrades();
	void addGrade(float grade, std::string subject);
private:
	int mGroup;
	std::vector<Discipline*> mDisciplines;
	std::vector<float> mGrades;
};