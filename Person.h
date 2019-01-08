#pragma once
#include <string>
#include <vector>
#include "Role.h"

class Person
{
public:
	Person() {};
	Person(std::vector<Role*> Roles,std::string, std::string, std::string, std::string);
	void setCNP(std::string);
	void setFirstName(std::string);
	void setLastName(std::string);
	void setEmail(std::string);
	void addRole(Role *);
	std::string getCNP() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmail() const;
	friend std::istream& operator>>(std::istream &in, Person &p);
	friend std::ostream& operator<<(std::ostream &out, Person &p);
protected:
	std::string mCNP;
	std::string mFirstName;
	std::string mLastName;
	std::string mEmail;
	std::vector <Role*> mRoles;
};