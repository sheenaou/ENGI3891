#include "Course.h"
#include<iostream>

int main (int argc, char * argv[]) {
	Course ENGI3891 (3891, Course::Level::Undergraduate);
	if (ENGI3891.capacity() == 100) std::cout<<"capacity() successful\n";
	else std::cout<<"capacity() failed.\n";
	for (int i =0; i < 100; i++) {
		ENGI3891.registerStudent();
	}
	if (ENGI3891.registerStudent() == false && ENGI3891.registerStudent(true) == true) {
		std::cout<<"registerStudent() successful.\n";
	} else std::cout<<"registerStudent() failed.\n";
	
	if (ENGI3891.enrolment() == 101) std::cout<<"enrolment() successful.\n";
	else std::cout<<"enrolment() failed.\n";
	if(ENGI3891.seatsRemaining() == -1) std::cout<<"seatsRemaining() successful.\n";
	else std::cout<< "seatsRemaining() failed.\n";

	return 0;
}
