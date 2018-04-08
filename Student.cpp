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
	admitDate.tm_mday = day_admit;
	admitDate.tm_mon = month_admit;
	admitDate.tm_year = year_admit;
	Student::is_full_time = is_full_time;
	Student::school = school;
	Student::units_completed = units_completed;
}


std::list<std::string> Student::getCourses()
{
	return Student::courses;
}

void Student::addCourse(std::string course){
	Student::courses.push_back(course);
}

void Student::removeCourse(std::string course){
	Student::courses.remove(course);
}

void Student::printCourses(){
    std::cout << "Your courses are " << std::endl;
    list<string>::const_iterator i;
	for( i = s.begin(); i != s.end(); ++i)
		cout << *i << " ";
	cout << endl;
}

void Student::setCourses(std::list<std::string> courses){
	this->courses = courses;
	//maybe shallow copy
	//else iterate with for loops
}

void Student::clearCourses(){
	Student::courses.clear();
}

struct tm Student::getAdmitDate()
{
	return Student::admitDate;
}

Student::School Student::getSchool()
{
	return Student::school;
}
        
double Student::getGPA()
{
	return Student::gpa;
}

double Student::getUnitsCompleted()
{
	return Student::units_completed;
}

bool Student::isFullTime()
{
	return Student::is_full_time;
}

void Student::setAdmitDate(int day, int month, int year)
{
    Student::admitDate.tm_mday = day;
    Student::admitDate.tm_mon = month;
    Student::admitDate.tm_year = year;
}

void Student::setSchool(School school)
{
	Student::school = school;
}

void Student::setGPA(double gpa)
{
	Student::gpa = gpa;
}

void Student::setUnitsCompleted(double units)
{
	Student::units_completed = units;
}

void Student::setFullTimeStatus(bool isFullTime)
{
	Student::is_full_time = isFullTime;
}


#endif
