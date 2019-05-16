#include "Course.h"

#include <iostream>

using namespace std;

int main (int argc, char * argv[]) {

	int i = 0;

	std::cout << " " << std::endl;
	std::cout << "If you don't get full marks, don't get mad.\n" << std::endl;

	std::cout << "Would you like to perform a test? Fuck typing in y or yes, I'm just gonna force run the code.\n" << std::endl;

for(i=0; i<7; i++){
	if(i == 0)
	{
		Course ENGI3891 (3891, Course::Level::Undergraduate);
		if (ENGI3891.capacity() == 100)
			std::cout<<"capacity() successful. PASSED TEST.\n";
		else
			std::cout<<"capacity() failed. FAILED TEST.\n";
		for (int i =0; i < 100; i++)
		{
			ENGI3891.registerStudent();
		}
		if (ENGI3891.registerStudent() == false && ENGI3891.registerStudent(true) == true)
		{
			std::cout<<"registerStudent() successful. PASSED TEST.\n";
		}
		else
			std::cout<<"registerStudent() failed. FAILED TEST.\n";
		if (ENGI3891.enrolment() == 101)
			std::cout<<"enrolment() successful. PASSED TEST.\n";
		else
			std::cout<<"enrolment() failed. FAILED TEST.\n";
		if(ENGI3891.seatsRemaining() == -1)
		{
			std::cout<<"seatsRemaining() successful. PASSED TEST.\n";
		}
		else
			std::cout<< "seatsRemaining() failed. FAILED TEST.\n";

		std::cout << "TEST 1 FINISHED" << std::endl;
		std::cout << " " << std::endl;
		}



		else if(i == 1)
		{
			Course ENGI3891 (3891, Course::Level::Undergraduate, 50);
			if (ENGI3891.capacity() == 50)
				std::cout<<"capacity() successful. PASSED TEST.\n";
			else
				std::cout<<"capacity() failed. FAILED TEST.\n";
			for (int i =0; i <= 50; i++)
			{
				ENGI3891.registerStudent();
			}
			if (ENGI3891.registerStudent(false) == false)
			{
				std::cout<<"registerStudent() successful. PASSED TEST.\n";
			}
			else
				std::cout<<"registerStudent() failed. FAILED TEST.\n";
			if (ENGI3891.enrolment() == 50)
				std::cout<<"enrolment() successful. PASSED TEST.\n";
			else
				std::cout<<"enrolment() failed. FAILED TEST.\n";
			if(ENGI3891.seatsRemaining() == 0)
			{
				std::cout<<"seatsRemaining() successful. PASSED TEST.\n";
			}
			else
				std::cout<< "seatsRemaining() failed. FAILED TEST.\n";

			std::cout << "TEST 2 FINISHED" << std::endl;
			std::cout << " " << std::endl;
			}

			else if(i == 2)
				{
					Course ENGI3891 (3891, Course::Level::Undergraduate, 1);
					if (ENGI3891.capacity() == 1)
						std::cout<<"capacity() successful. PASSED TEST.\n";
					else
						std::cout<<"capacity() failed. FAILED TEST.\n";
					for (int i =0; i < 1; i++)
					{
						ENGI3891.registerStudent();
					}
					if (ENGI3891.registerStudent(true) == true)
					{
						if (ENGI3891.registerStudent(true) == true)
						{
						std::cout<<"registerStudent() successful. PASSED TEST.\n";
						}
					}
					else
						std::cout<<"registerStudent() failed. FAILED TEST.\n";
					if (ENGI3891.enrolment() == 3)
						std::cout<<"enrolment() successful. PASSED TEST.\n";
					else
						std::cout<<"enrolment() failed. FAILED TEST.\n";
					if(ENGI3891.seatsRemaining() == -2)
					{
						std::cout<<"seatsRemaining() successful. PASSED TEST.\n";
					}
					else
						std::cout<< "seatsRemaining() failed. FAILED TEST.\n";

					std::cout << "TEST 3 FINISHED" << std::endl;
					std::cout << " " << std::endl;
					}

					else if(i == 3)
						{
							Course ENGI3891 (3891, Course::Level::Undergraduate, 0);
							if (ENGI3891.capacity() == 0)
								std::cout<<"capacity() successful. PASSED TEST.\n";
							else
								std::cout<<"capacity() failed. FAILED TEST.\n";

							if (ENGI3891.registerStudent() == false)
							{
								std::cout<<"registerStudent() failed. PASSED TEST.\n";
							}
							else
								std::cout<<"registerStudent() successful. FAILED TEST.\n";
							if (ENGI3891.enrolment() == 0)
								std::cout<<"enrolment() successful. PASSED TEST.\n";
							else
								std::cout<<"enrolment() failed. FAILED TEST.\n";
							if(ENGI3891.seatsRemaining() == 0)
							{
								std::cout<<"seatsRemaining() successful. PASSED TEST.\n";
							}
							else
								std::cout<< "seatsRemaining() failed. FAILED TEST.\n";

							std::cout << "TEST 4 FINISHED" << std::endl;
							std::cout << " " << std::endl;
							}

							else if(i == 4)
								{
									Course ENGI3891 (3891, Course::Level::Undergraduate, 0);
									if (ENGI3891.capacity() == 0)
										std::cout<<"capacity() successful. PASSED TEST.\n";
									else
										std::cout<<"capacity() failed. FAILED TEST.\n";
									for (int i =0; i <= 0; i++)
									{
											ENGI3891.registerStudent();
									}
									if (ENGI3891.registerStudent(true) == true)
									{
										std::cout<<"registerStudent() failed. PASSED TEST.\n";
									}
									else
										std::cout<<"registerStudent() successful. FAILED TEST.\n";
									if (ENGI3891.enrolment() == 1)
										std::cout<<"enrolment() successful. PASSED TEST.\n";
									else
										std::cout<<"enrolment() failed. FAILED TEST.\n";
									if(ENGI3891.seatsRemaining() == -1)
									{
										std::cout<<"seatsRemaining() successful. PASSED TEST.\n";
									}
									else
										std::cout<< "seatsRemaining() failed. FAILED TEST.\n";

									std::cout << "TEST 5 FINISHED" << std::endl;
									std::cout << " " << std::endl;
									}

									else if(i == 5)
										{
											Course ENGI3891 (3891, Course::Level::Undergraduate, 1000);
											if (ENGI3891.capacity() == 1000)
												std::cout<<"capacity() successful. PASSED TEST.\n";
											else
												std::cout<<"capacity() failed. FAILED TEST.\n";
											for (int i =0; i < 1000; i++)
											{
												ENGI3891.registerStudent();
											}
											if (ENGI3891.registerStudent(true) == true)
											{
												if (ENGI3891.registerStudent(true) == true)
												{
												std::cout<<"registerStudent() successful. PASSED TEST.\n";
												}
											}
											else
												std::cout<<"registerStudent() failed. FAILED TEST.\n";
											if (ENGI3891.enrolment() == 1002)
												std::cout<<"enrolment() successful. PASSED TEST.\n";
											else
												std::cout<<"enrolment() failed. FAILED TEST.\n";
											if(ENGI3891.seatsRemaining() == -2)
											{
												std::cout<<"seatsRemaining() successful. PASSED TEST.\n";
											}
											else
												std::cout<< "seatsRemaining() failed. FAILED TEST.\n";

											std::cout << "TEST 6 FINISHED" << std::endl;
											std::cout << " " << std::endl;
											}

											else if(i == 6)
												{
													Course ENGI3891 (3891, Course::Level::Undergraduate, 1000);
													if (ENGI3891.capacity() == 1000)
														std::cout<<"capacity() successful. PASSED TEST.\n";
													else
														std::cout<<"capacity() failed. FAILED TEST.\n";
													for (int i =0; i < 1000; i++)
													{
														ENGI3891.registerStudent();
													}
													if (ENGI3891.registerStudent() == false)
													{
														std::cout<<"registerStudent() successful. PASSED TEST.\n";
													}
													else
														std::cout<<"registerStudent() failed. FAILED TEST.\n";
													if (ENGI3891.enrolment() == 1000)
														std::cout<<"enrolment() successful. PASSED TEST.\n";
													else
														std::cout<<"enrolment() failed. FAILED TEST.\n";
													if(ENGI3891.seatsRemaining() == 0)
													{
														std::cout<<"seatsRemaining() successful. PASSED TEST.\n";
													}
													else
														std::cout<< "seatsRemaining() failed. FAILED TEST.\n";

													std::cout << "TEST 7 FINISHED" << std::endl;
													std::cout << " " << std::endl;
													}
}

std::cout << "END OF PROGRAM." << std::endl;
std::cout << "RIP. Lets get drunk." << std::endl;

std::cout << "Cereal is not soup. Refuse to accept it." << std::endl;

	return 0;
}
