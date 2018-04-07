// as9kc and hn3gn

#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"

Person::Person() : name((struct nm) {.first_name = "dummy_first_name", .last_name = "dummy_first_name"}),
                   contact((struct contact_details) {.email = "email@domain", .address = "dummy_physical_address", .phone = -1}),
                   urid(0), netid("wx0yz")
{
    Person::dob.tm_mday = -1;
    Person::dob.tm_mon = -1;
    Person::dob.tm_year = 1899 - 1900;
}

Person::~Person()
{}

Person::Person(const Person& other)
{
    Person::dob.tm_mday = other.Person::dob.tm_mday;
    Person::dob.tm_mon  = other.Person::dob.tm_mon;
    Person::dob.tm_year = other.Person::dob.tm_year;
    
    Person::name.first_name = other.Person::name.first_name;
    Person::name.last_name  = other.Person::name.last_name;
    
    Person::contact.email   = other.Person::contact.email;
    Person::contact.address = other.Person::contact.address;
    Person::contact.phone   = other.Person::contact.phone;
    
    Person::urid    = other.Person::urid;
    Person::netid   = other.Person::netid;
}

Person::Person(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone)
               : name((struct nm) {.first_name = fname, .last_name = lname}),
                 contact((struct contact_details) {.email = email, .address = address, .phone = phone}),
                 urid(urid), netid(netid)
{
    Person::dob.tm_mday = dob_day;
    Person::dob.tm_mon = dob_month;
    Person::dob.tm_year = dob_year - 1900;
}

std::string  Person::getFirstName()     { return Person::name.first_name; }

std::string  Person::getLastName()      { return Person::name.last_name; }

struct tm    Person::getDateOfBirth()   { return Person::dob; }

std::string  Person::getAddress()       { return Person::contact.address; }

std::string  Person::getNetID()
{
    return 0;
}

int          Person::getURID()
{
    return 0;
}

std::string  getEmail()
{
    return 0;
}

long         getPhone()
{
    return 0;
}

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
