//Programmer: Ryan Namgung and Aalok Sathe
#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__
#include <iostream>
#include "Student.h"

Student::Student()
{}

Student::Student(const Student& other)
{}

Student::~Student()
{}

Student::Student(int urid, std::string netid, std::string lname, std::string fname, int dob_day, int dob_mo, int dob_yr, std::string email, std::string address, long phone, int day_admit, int month_admit, int year_admit, School school, bool is_full_time, double units_completed)
{
	Person(urid, netid, lname, fname, dob_day, dob_mo ,dob_yr, email, address, phone);
	day_admit = 0;
	month_admit = 0;
	year_admit = 0;
	is_full_time = false;
	school = UNDEFINED;
	units_completed = 0;
}


std::list<std::string> Student::getCourses()
{
	return courses;
}

void Student::addCourse(std::string course){
	courses.push_back(course);
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
	//maybe shallow copy
	//else iterate with for loops
}

void Student::clearCourses(){
	courses.clear();
}

struct tm getAdmitDate()
{
	return Student.admitDate;
}

School getSchool()
{
	return school;
}
        
double getGPA()
{
	return gpa;
}

double getUnitsCompleted()
{
	return units_completed;
}

bool isFullTime()
{
	return is_full_time;
}

void setAdmitDate(int day, int month, int year)
{
	day_admit = day;
	month_admit = month;
	year_admit = year 
}

void setSchool(School school)
{
	this -> school = school;
}

void setGPA(double gpa)
{
	this -> gpa = gpa;
}

void setUnitsCompleted(double units)
{
	units_completed = units;
}

void setFullTimeStatus(bool isFullTime)
{
	is_full_time = isFullTime;
}


#endif
