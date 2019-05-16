#include <iostream>
#include "Course.h"
#include "Student.h"
#include <vector>
using namespace std;

Student::Student(unsigned int id, string name, Level level)
	:id_(id), name_(name), level_(level)
{
};

/*********************************************/

unsigned int Student::id() const{

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
