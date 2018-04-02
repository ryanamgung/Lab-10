// This file coded by as9kc
// as9kc and hn3gn

#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"

Person::Person() : name((struct nm) {.first_name = "dummy_first_name", .last_name = "dummy_first_name"}),
                   //dob((struct tm) {.tm_mday = -1, .tm_mon = -1, .tm_year = 1899}),
                   contact((struct contact_details) {.email = "email@domain", .address = "dummy_physical_address", .phone = -1})
                   {}

Person::~Person()
{}

Person::Person(const Person& other)
{}

Person::Person(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone)
{}

std::string  Person::getFirstName()
{}

std::string  Person::getLastName()
{}

struct tm    Person::getDateOfBirth()
{}

std::string  Person::getAddress()
{}

std::string  Person::getNetID()
{}

int          getURID()
{}

std::string  getEmail()
{}

long         getPhone()
{}

void setFirstName(std::string fname)
{}

void setLastName(std::string lname)
{}

void setDateOfBirth(int day, int month, int year)
{}

void setAddress(std::string address)
{}

void setNetID(std::string netid)
{}

void setURID(int urid)
{}

void setEmail(std::string email)
{}

void setPhone(long number)
{}

#endif
