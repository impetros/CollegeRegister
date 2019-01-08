#include <iostream>
#include "Activity.h"
#include "ActivityRepository.h"
#include "AdministrativeRole.h"
#include "ActivityRole.h"
#include "Discipline.h"
#include "DisciplineRepository.h"
#include "GuestRole.h"
#include "Person.h"
#include "PersonRepository.h"
#include "Repository.h"
#include "Role.h"
#include "Room.h"
#include "RoomRepository.h"
#include "StudentRole.h"
#include "StudyGroup.h"
#include "TeacherRole.h"

int main()
{

	PersonRepository stud;
	PersonRepository teach;
	RoomRepository r;
	ActivityRepository act;
	DisciplineRepository disc;
	//teach.add(new Person({new TeacherRole()},"100","Alexandrescu","Vlad","alexandrescu.vlad@yahoo.com"));
	//teach.print();
	//r.add(new Room("Haret"));
	//r.print();
	//stud.add(new Person({new StudentRole()}, "300", "Sargsian", "Petros", "sargsian.petros@yahoo.com"));
	system("Pause");
	return 0;

}
