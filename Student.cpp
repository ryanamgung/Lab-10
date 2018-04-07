//Programmer: Ryan Namgung and Aalok Sathe
#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__
#include <iostream>
#include "Student.h"


Student::Student(const Student& other)
{	
}

Student::~Student()
{}

Student::Student(int urid, std::string netid, std::string lname, std::string fname, int dob_day, int dob_mo, int dob_yr, std::string email, std::string address, long phone,
int day_admit, int month_admit, int year_admit, School school, bool is_full_time, double units_completed): Person(urid), Person(netid)
{
}

Student::~Student() {}

Student::getCourses(){
	std::cout << courses << std::endl;
}

void Student::addCourse(std::string course){
	courses.insert(course);
}

void Student::removeCourse(std::string course){
	courses.remove(course);
}

void Student::printCourses(){
	    std::cout << "Your courses are " << std::endl;
        std::cout << courses << std::endl;
}

void Student::setCourses(std::list<std::string> courses){
	courses = this.courses;
}

void Student::clearCourses(){
	courses = null;
}

struct tm getAdmitDate()
{}

School getSchool()
{}
        
double getGPA()
{}

double getUnitsCompleted()
{}

bool isFullTime()
{}

void setAdmitDate(int day, int month, int year)
{}

void setSchool(School school)
{}

void setGPA(double gpa)
{}

void setUnitsCompleted(double units)
{}

void setFullTimeStatus(bool isFullTime)
{}


#endif
