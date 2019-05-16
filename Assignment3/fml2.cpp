#include "Course.h"
#include "Student.h"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{

  std::cout << " " << std::endl;
  std::cout << "If you don't get full marks, don't get mad.\n" << std::endl;

  Student a(100000000, "Student A", Student::Level::Undergraduate);
  Student b(200000000, "Student B", Student::Level::Undergraduate);
  Student c(300000000, "Student C", Student::Level::Undergraduate);
  Student d(400000000, "Student D", Student::Level::Undergraduate);
  Student e(500000000, "Student E", Student::Level::Undergraduate);
  Student f(600000000, "Student F", Student::Level::Postgraduate);

  std::vector<Student> students = {a,b,c,d,e,f};

  Course engi_1000(1000,Course::Level::Undergraduate);
  Course engi_2000(2000,Course::Level::Undergraduate,6);
  Course engi_3000(3000,Course::Level::Undergraduate,0);
  Course engi_4000(4000,Course::Level::Undergraduate,0);
  Course engi_5000(5000,Course::Level::Undergraduate,0);
  Course engi_6000(6000,Course::Level::Undergraduate,1);
  Course engi_7000(7000,Course::Level::Undergraduate,3);
  Course engi_8000(8000,Course::Level::Undergraduate,3);
  Course engi_9000(9000,Course::Level::Postgraduate,1);
  Course engi_10000(10000,Course::Level::Postgraduate,1);



    std::cout << " " << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << "ENGI_1000 COURSE TEST" << std::endl;

    for(int i = 0; i < 6; i++)
    {
      engi_1000.registerStudent(students[i]);
    }

    std::cout << " " << std::endl;
    std::cout << "Course Number    : " << engi_1000.number() << endl;

    if (engi_1000.level()==Course::Level::Undergraduate)
    {
      std::cout << "Course Level     : Undergraduate" << std::endl;
    }
    else if (engi_1000.level()==Course::Level::Postgraduate)
    {
      std::cout << "Course Level     : Postgraduate" << std::endl;
    }

    if(engi_1000.number()==1000)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nStudents Enrolled: " << engi_1000.enrolment();

    if(engi_1000.enrolment()==6)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nCapacity         : " << engi_1000.capacity();

    if(engi_1000.capacity()==100)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nSeats left       : " << engi_1000.seatsRemaining();

    if(engi_1000.seatsRemaining()==94)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "Students         : ";

    for(int i = 0; i < (engi_1000.classList()).size(); i++)
    {
        std::cout << (engi_1000.classList())[i] << "\n                   ";
    }

    std::cout << " " << std::endl;
    std::cout << "ENGI_1000 COURSE TEST FINSIHED" << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << " " << std::endl;




    std::cout << " " << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << "ENGI_2000 COURSE TEST" << std::endl;

    for(int i = 0; i < 6; i++)
    {
      engi_2000.registerStudent(students[i]);
    }

    std::cout << " " << std::endl;
    std::cout << "Course Number    : " << engi_2000.number() << endl;

    if (engi_2000.level()==Course::Level::Undergraduate)
    {
      std::cout << "Course Level     : Undergraduate" << std::endl;
    }
    else if (engi_2000.level()==Course::Level::Postgraduate)
    {
      std::cout << "Course Level     : Postgraduate" << std::endl;
    }

    if(engi_2000.number()==2000)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nStudents Enrolled: " << engi_2000.enrolment();

    if(engi_2000.enrolment()==6)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nCapacity         : " << engi_2000.capacity();

    if(engi_2000.capacity()==6)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nSeats left       : " << engi_2000.seatsRemaining();

    if(engi_2000.seatsRemaining()==0)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "Students         : ";

    for(int i = 0; i < (engi_2000.classList()).size(); i++)
    {
        std::cout << (engi_2000.classList())[i] << "\n                   ";
    }

    std::cout << " " << std::endl;
    std::cout << "ENGI_2000 COURSE TEST FINSIHED" << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << " " << std::endl;




    std::cout << " " << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << "ENGI_3000 COURSE TEST" << std::endl;

    std::cout << " " << std::endl;
    std::cout << "Course Number    : " << engi_3000.number() << endl;

    if (engi_3000.level()==Course::Level::Undergraduate)
    {
      std::cout << "Course Level     : Undergraduate" << std::endl;
    }
    else if (engi_3000.level()==Course::Level::Postgraduate)
    {
      std::cout << "Course Level     : Postgraduate" << std::endl;
    }

    if(engi_3000.number()==3000)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nStudents Enrolled: " << engi_3000.enrolment();

    if(engi_3000.enrolment()==0)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nCapacity         : " << engi_3000.capacity();

    if(engi_3000.capacity()==0)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nSeats left       : " << engi_3000.seatsRemaining();

    if(engi_3000.seatsRemaining()==0)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "Students         : ";

    for(int i = 0; i < (engi_3000.classList()).size(); i++)
    {
        std::cout << (engi_3000.classList())[i] << "\n                   ";
    }

    std::cout << " " << std::endl;
    std::cout << "ENGI_3000 COURSE TEST FINSIHED" << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << " " << std::endl;




    std::cout << " " << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << "ENGI_4000 COURSE TEST" << std::endl;

    engi_4000.registerStudent(a,true);
    engi_4000.registerStudent(b,true);
    engi_4000.registerStudent(c,true);
    engi_4000.registerStudent(d,true);
    engi_4000.registerStudent(e,true);
    engi_4000.registerStudent(f,true);

    std::cout << " " << std::endl;
    std::cout << "Course Number    : " << engi_4000.number() << endl;

    if (engi_4000.level()==Course::Level::Undergraduate)
    {
      std::cout << "Course Level     : Undergraduate" << std::endl;
    }
    else if (engi_4000.level()==Course::Level::Postgraduate)
    {
      std::cout << "Course Level     : Postgraduate" << std::endl;
    }

    if(engi_4000.number()==4000)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nStudents Enrolled: " << engi_4000.enrolment();

    if(engi_4000.enrolment()==6)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nCapacity         : " << engi_4000.capacity();

    if(engi_4000.capacity()==0)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nSeats left       : " << engi_4000.seatsRemaining();

    if(engi_4000.seatsRemaining()==-6)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "Students         : ";

    for(int i = 0; i < (engi_4000.classList()).size(); i++)
    {
        std::cout << (engi_4000.classList())[i] << "\n                   ";
    }

    std::cout << " " << std::endl;
    std::cout << "ENGI_4000 COURSE TEST FINSIHED" << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << " " << std::endl;




    std::cout << " " << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << "ENGI_5000 COURSE TEST" << std::endl;

    engi_5000.registerStudent(a,true);
    engi_5000.registerStudent(b,false);
    engi_5000.registerStudent(c,true);
    engi_5000.registerStudent(d,false);
    engi_5000.registerStudent(e,true);
    engi_5000.registerStudent(f,false);

    std::cout << " " << std::endl;
    std::cout << "Course Number    : " << engi_5000.number() << endl;

    if (engi_5000.level()==Course::Level::Undergraduate)
    {
      std::cout << "Course Level     : Undergraduate" << std::endl;
    }
    else if (engi_5000.level()==Course::Level::Postgraduate)
    {
      std::cout << "Course Level     : Postgraduate" << std::endl;
    }

    if(engi_5000.number()==5000)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nStudents Enrolled: " << engi_5000.enrolment();

    if(engi_5000.enrolment()==3)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nCapacity         : " << engi_5000.capacity();

    if(engi_5000.capacity()==0)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nSeats left       : " << engi_5000.seatsRemaining();

    if(engi_5000.seatsRemaining()==-3)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "Students         : ";

    for(int i = 0; i < (engi_5000.classList()).size(); i++)
    {
        std::cout << (engi_5000.classList())[i] << "\n                   ";
    }

    std::cout << " " << std::endl;
    std::cout << "ENGI_5000 COURSE TEST FINSIHED" << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << " " << std::endl;




    std::cout << " " << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << "ENGI_6000 COURSE TEST" << std::endl;

    for(int i = 0; i < 6; i++)
    {
      engi_6000.registerStudent(students[i]);
    }

    std::cout << " " << std::endl;
    std::cout << "Course Number    : " << engi_6000.number() << endl;

    if (engi_6000.level()==Course::Level::Undergraduate)
    {
      std::cout << "Course Level     : Undergraduate" << std::endl;
    }
    else if (engi_6000.level()==Course::Level::Postgraduate)
    {
      std::cout << "Course Level     : Postgraduate" << std::endl;
    }

    if(engi_6000.number()==6000)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nStudents Enrolled: " << engi_6000.enrolment();

    if(engi_6000.enrolment()==1)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nCapacity         : " << engi_6000.capacity();

    if(engi_6000.capacity()==1)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nSeats left       : " << engi_6000.seatsRemaining();

    if(engi_6000.seatsRemaining()==0)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "Students         : ";

    for(int i = 0; i < (engi_6000.classList()).size(); i++)
    {
        std::cout << (engi_6000.classList())[i] << "\n                   ";
    }

    std::cout << " " << std::endl;
    std::cout << "ENGI_6000 COURSE TEST FINSIHED" << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << " " << std::endl;




    std::cout << " " << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << "ENGI_7000 COURSE TEST" << std::endl;
    for(int i = 0; i < 6; i+=2)
    {
      engi_7000.registerStudent(students[i]);
    }

    std::cout << " " << std::endl;
    std::cout << "Course Number    : " << engi_7000.number() << endl;

    if (engi_7000.level()==Course::Level::Undergraduate)
    {
      std::cout << "Course Level     : Undergraduate" << std::endl;
    }
    else if (engi_7000.level()==Course::Level::Postgraduate)
    {
      std::cout << "Course Level     : Postgraduate" << std::endl;
    }

    if(engi_7000.number()==7000)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nStudents Enrolled: " << engi_7000.enrolment();

    if(engi_7000.enrolment()==3)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << "\nCapacity         : " << engi_7000.capacity();

    if(engi_7000.capacity()==3)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << "\nSeats left       : " << engi_7000.seatsRemaining();

    if(engi_7000.seatsRemaining()==0)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "Students         : ";

    for(int i = 0; i < (engi_7000.classList()).size(); i++)
    {
        std::cout << (engi_7000.classList())[i] << "\n                   ";
    }

    std::cout << " " << std::endl;
    std::cout << "ENGI_7000 COURSE TEST FINSIHED" << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << " " << std::endl;




    std::cout << " " << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << "ENGI_8000 COURSE TEST" << std::endl;
    for(int i = 0; i < 6; i+=2)
    {
      engi_8000.registerStudent(students[i]);
    }
    engi_8000.registerStudent(b,true);
    engi_8000.registerStudent(d,true);
    engi_8000.registerStudent(f,true);

    std::cout << " " << std::endl;
    std::cout << "Course Number    : " << engi_8000.number() << endl;

    if (engi_8000.level()==Course::Level::Undergraduate)
    {
      std::cout << "Course Level     : Undergraduate" << std::endl;
    }
    else if (engi_8000.level()==Course::Level::Postgraduate)
    {
      std::cout << "Course Level     : Postgraduate" << std::endl;
    }

    if(engi_8000.number()==8000)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nStudents Enrolled: " << engi_8000.enrolment();

    if(engi_8000.enrolment()==6)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << "\nCapacity         : " << engi_8000.capacity();

    if(engi_8000.capacity()==3)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << "\nSeats left       : " << engi_8000.seatsRemaining();

    if(engi_8000.seatsRemaining()==-3)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "Students         : ";

    for(int i = 0; i < (engi_8000.classList()).size(); i++)
    {
        std::cout << (engi_8000.classList())[i] << "\n                   ";
    }

    std::cout << " " << std::endl;
    std::cout << "ENGI_8000 COURSE TEST FINSIHED" << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << " " << std::endl;




    std::cout << " " << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << "ENGI_9000 COURSE TEST" << std::endl;
    for(int i = 0; i < 6; i++)
    {
      if(students[i].level()==Student::Level::Postgraduate)
      {
        engi_9000.registerStudent(students[i]);
      }
    }

    std::cout << " " << std::endl;
    std::cout << "Course Number    : " << engi_9000.number() << endl;

    if (engi_9000.level()==Course::Level::Undergraduate)
    {
      std::cout << "Course Level     : Undergraduate" << std::endl;
    }
    else if (engi_9000.level()==Course::Level::Postgraduate)
    {
      std::cout << "Course Level     : Postgraduate" << std::endl;
    }

    if(engi_9000.number()==9000)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nStudents Enrolled: " << engi_9000.enrolment();

    if(engi_9000.enrolment()==1)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << "\nCapacity         : " << engi_9000.capacity();

    if(engi_9000.capacity()==1)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << "\nSeats left       : " << engi_9000.seatsRemaining();

    if(engi_9000.seatsRemaining()==0)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "Students         : ";

    for(int i = 0; i < (engi_9000.classList()).size(); i++)
    {
        std::cout << (engi_9000.classList())[i] << "\n                   ";
    }

    std::cout << " " << std::endl;
    std::cout << "ENGI_9000 COURSE TEST FINSIHED" << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << " " << std::endl;




    std::cout << " " << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << "ENGI_10000 COURSE TEST" << std::endl;
    for(int i = 0; i < 6; i++)
    {
      if(students[i].level()==Student::Level::Postgraduate)
      {
        engi_10000.registerStudent(students[i]);
      }
    }

    engi_10000.registerStudent(a,true);
    engi_10000.registerStudent(b,true);
    engi_10000.registerStudent(c,true);
    engi_10000.registerStudent(d,true);
    engi_10000.registerStudent(e,true);

    std::cout << " " << std::endl;
    std::cout << "Course Number    : " << engi_10000.number() << endl;

    if (engi_10000.level()==Course::Level::Undergraduate)
    {
      std::cout << "Course Level     : Undergraduate" << std::endl;
    }
    else if (engi_9000.level()==Course::Level::Postgraduate)
    {
      std::cout << "Course Level     : Postgraduate" << std::endl;
    }

    if(engi_10000.number()==10000)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED?????????????????????????" << std::endl;
    }

    std::cout << "\nStudents Enrolled: " << engi_9000.enrolment();

    if(engi_10000.enrolment()==6)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << "\nCapacity         : " << engi_10000.capacity();

    if(engi_10000.capacity()==1)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << "\nSeats left       : " << engi_10000.seatsRemaining();

    if(engi_10000.seatsRemaining()==-5)
    {
      std::cout << " " << std::endl;
      std::cout << "TEST PASSED!!!!!" << std::endl;
    }
    else
    {
      std::cout << " " << std::endl;
      std::cout << "TEST FAILED???????????????????????????????????" << std::endl;
    }

    std::cout << " " << std::endl;
    std::cout << "Students         : ";

    for(int i = 0; i < (engi_10000.classList()).size(); i++)
    {
        std::cout << (engi_10000.classList())[i] << "\n                   ";
    }

    std::cout << " " << std::endl;
    std::cout << "ENGI_10000 COURSE TEST FINSIHED" << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << " " << std::endl;




      std::cout << std::endl;

      for(int i = 0; i < students.size(); i++)
      {
        std::cout << "Student: " << students[i].name();
        std::cout << "\nID     : " << students[i].id() << endl;

        if (students[i].level()==Student::Level::Undergraduate)
        {
          std::cout << "Level  : Undergraduate" << std::endl;
        }

        else if (students[i].level()==Student::Level::Postgraduate)
        {
          std::cout << "Level  : Postgraduate" << std::endl;
        }

      std::cout << " " << std::endl;
      }
    std::cout << "END OF PROGRAM." << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Check your shit over." << std::endl;
    std::cout << "RIP. Lets get drunk." << std::endl;

   return 0;
}
