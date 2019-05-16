#include <iostream>
#include "Course.h"

using namespace std;

Course::Course(unsigned int number, Level level, unsigned int capacity)
	:NUMBER(number), LEVEL(level), studentsEnrolled(0), limit(capacity)
{
}

bool Course::registerStudent(bool overrideLimits){
	if(studentsEnrolled<limit || overrideLimits==true){    //student will be enrolled if there is space or the limit is overrided
		studentsEnrolled++;
		return true;
	}
	
	else{ //if the student is not enrolled return flase
	return false;
	}	
}


//! How many students can enrol in this course?
unsigned int Course::capacity() const{

return limit;
}

//! How many students have enrolled in this course?
unsigned int Course::enrolment() const{

return studentsEnrolled;

}

//! How many seats remain in this course?
int Course::seatsRemaining() const{

int seats=limit-studentsEnrolled;  //the number of seats remaining is capacity minus the number of students enrolled
return seats;
}

unsigned int Course::number() const{

return NUMBER;	//returns the course number
}

Course::Level Course::level() const{

	///takes the course number and finds the first digit which is what year the course is directed at

return NUMBER%1000;
}

//Course::vector<string> classList() const{




