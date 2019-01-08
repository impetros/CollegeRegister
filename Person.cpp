#include "Person.h"

Person::Person(std::vector<Role*> Roles,std::string a, std::string b, std::string c, std::string d)
{
	mRoles = Roles;
	mCNP = a;
	mFirstName = b;
	mLastName = c;
	mEmail = d;
}

void Person::setCNP(std::string a)
{
	mCNP = a;
}

void Person::setFirstName(std::string a)
{
	mFirstName = a;
}

void Person::setLastName(std::string a)
{
	mLastName = a;
}

void Person::setEmail(std::string a)
{
	mEmail = a;
}

void Person::addRole(Role *t)
{
	mRoles.push_back(t);
}

std::string Person::getCNP() const
{
	return mCNP;
}

std::string Person::getFirstName() const
{
	return mFirstName;
}

std::string Person::getLastName() const
{
	return mLastName;
}

std::string Person::getEmail() const
{
	return mEmail;
}

std::istream& operator>>(std::istream &in, Person &p)
{
	in >> p.mCNP >> p.mFirstName >> p.mLastName >> p.mEmail;
	return in;
}

std::ostream& operator<<(std::ostream &out, Person &p)
{
	out << p.mCNP << ' ' << p.mFirstName << ' ' << p.mLastName << ' ' << p.mEmail << '\n';
	return out;
}