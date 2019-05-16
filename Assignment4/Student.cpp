#include <iostream>
#include "Course.h"
#include "Student.h"
#include <vector>
using namespace std;

Student::Student(ID id, string name, Level level)
	:id_(id), name_(name), level_(level)
{
}

/*********************************************/

Student::ID Student::id() const{

return id_; ///returns the id of the student
}

/*********************************************/

string Student::name() const{

return name_;  //returns the student's name
}

/*********************************************/

Student::Level Student::level() const{

return level_;		//returns what level the student is
}

/*********************************************/

	
bool Student::operator == (const Student& s) const{

	if(( id_.serial==s.id().serial ) and ( id_.year==s.id().year )){ //compares the two student serial numbers and year and returns true if they match
			return true;

	}
		return false;

}

bool Student::operator != (const Student& s) const{

	if ((id_.serial !=s.id().serial) or ( id_.year !=s.id().year )){ // compares the students serial numbers or year to see if they matchi
			return true;
	}

	return false;
}

