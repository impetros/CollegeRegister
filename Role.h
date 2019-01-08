#pragma once

class Role {
public:
	enum RoleType {
		STUDENT_ROLE,
		TEACHER_ROLE,
		ADMINISTRATIVE_ROLE,
		GUEST_ROLE,
		ACTIVITY_ROLE
	};
	Role(RoleType type);
protected:
	RoleType mType;
};