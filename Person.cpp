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

std::string  Person::getNetID()         { return Person::netid; }

int          Person::getURID()          { return Person::urid; }

std::string  Person::getEmail()         { return Person::contact.email; }

long         Person::getPhone()         { return Person::contact.phone; }

void Person::setFirstName(std::string fname)    { Person::name.first_name = fname; }

void Person::setLastName(std::string lname)     { Person::name.last_name = lname; }

void Person::setDateOfBirth(int day, int month, int year)
{
    Person::dob.tm_mday = day;
    Person::dob.tm_mon = month;
    Person::dob.tm_year = year-1900;
}

void Person::setAddress(std::string address)    { Person::contact.address = address; }

void Person::setNetID(std::string netid)        { Person::netid = netid; }

void Person::setURID(int urid)                  { Person::urid = urid; }

void Person::setEmail(std::string email)        { Person::contact.email = email; }

void Person::setPhone(long number)              { Person::contact.phone = number; }

#endif
