#include <iostream>
#include "Course.h"
#include "Student.h"
#include <vector>


Course::Course(unsigned int number, Level level, unsigned int capacity)
	:NUMBER(number), LEVEL(level), studentsEnrolled(0), limit(capacity)
{
}

/*********************************************/

bool Course::registerStudent(Student s, bool overrideLimits){
	bool alreadyEnroll= false;

	if( (studentsEnrolled<limit || overrideLimits) ){
		
		for (int i = 0; i<classList_.size(); i++){
			if  (studentList_[i]==s){
				alreadyEnroll=true;
			}
		}
			   //student will be enrolled if there is space or the limit is overrided and as along as they are not 														already enrolled
			if (!alreadyEnroll){	
				studentsEnrolled++;
				classList_.push_back(s.name()); 	// add the name of student to the vector if they are registered
				studentList_.push_back(s);  // create a vector of objects with student information
				return true;
			}
	}

return false;	//if the student is not enrolled return false	
}



/*********************************************/

unsigned int Course::capacity() const{

return limit;		//returnt the capacity limit for the course
}

/*********************************************/

unsigned int Course::enrolment() const{

return studentsEnrolled;		//returns how many students are enrolled in the course

}

/*********************************************/

int Course::seatsRemaining() const{

int seats=limit-studentsEnrolled;  //the number of seats remaining is capacity minus the number of students enrolled
return seats;
}

/*********************************************/

unsigned int Course::number() const{

return NUMBER;	//returns the course number
}

/*********************************************/

Course::Level Course::level() const{

return LEVEL; //returns level of course
}

/*********************************************/

vector<string> Course::classList() const{

return classList_; // returns the list of people enrolled in the course
}

/*********************************************/


vector<Student> Course::studentList() const{

return studentList_; // returns the list of people enrolled in the course
}

/*********************************************/

Course& Course::operator << (Student s)
{
	if ( !registerStudent(s)) //if the student cannot register then throw the string.
	{
	  throw std::string ("cannot register student");
	}
 return *this;
}




	
