// as9kc and hn3gn
#include <iostream>
#include <iomanip>
#include "Person.h"
#include "Student.h"
#include <iomanip>
using namespace std;

int main()
{

    /***********************************************************************
    ****************    Section: Person tests   ****************************
    ***********************************************************************/

    std::cout << "\nTests for PERSON.\n";
    std::cout << std::setfill ('=') << std::setw (64) << "\n";    
    std::cout << "Testing constructors.\n";
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
    
    /***************    Testing constructors        */
    Person firstPerson;
    Person thirdPerson(
               12481632, "zz1zz", "ALastName", "AFirstName", 
               14, 3, 1970, "student@richmond.edu",
               "This is where I live.", 8042898000
           );
    Person secondPerson(thirdPerson);
    
    std::cout << "\tConstruction passed.\n";
    
    std::cout << std::setfill ('=') << std::setw (64) << "\n";
    
    std::cout << "Testing getters.\n";
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
    
    std::cout << "Name.\n";
    /***************    Testing getFirstName()      */
    std::cout << "\t" << secondPerson.Person::getFirstName()
              << "\t[AFirstName]" << std::endl;
    /***************    Testing getLastName()       */
    std::cout << "\t" << secondPerson.Person::getLastName()
              << "\t[ALastName]" << std::endl;
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
              
    /***************    Testing getDateOfBirth()    */
    std::cout << "Date of birth.\n";
    std::cout << "\t" << secondPerson.Person::getDateOfBirth().tm_mday
              << "\t[14 (birth date)]" << std::endl;
    std::cout << "\t" << secondPerson.Person::getDateOfBirth().tm_mon
              << "\t[3 (birth month)]" << std::endl;
    std::cout << "\t" << secondPerson.Person::getDateOfBirth().tm_year
              << "\t[70 (birth year since 1900)]" << std::endl;
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
              
    std::cout << "Contact details.\n";
    /***************    Testing getAddress()        */
    std::cout << "\t" << secondPerson.Person::getAddress()
              << "\t[This is where I live.]" << std::endl;
    /***************    Testing getEmail()          */
    std::cout << "\t" << secondPerson.Person::getEmail()
              << "\t[student@richmond.edu]" << std::endl;
    std::cout << "\t" << secondPerson.Person::getPhone()
              << "\t[8042898000]" << std::endl;
    
    std::cout << std::setfill ('=') << std::setw (64) << "\n";
    
    std::cout << "Testing setters.\n";
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
    
    /***************    Testing set Name        */ 
    std::cout << "Setting name.\n";   
    firstPerson.Person::setFirstName("Webst");
    firstPerson.Person::setLastName("UR");
    std::cout << "\t" << firstPerson.Person::getFirstName()
              << "\t[Webst]" << std::endl;
    std::cout << "\t" << firstPerson.Person::getLastName()
              << "\t[UR]" << std::endl;
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
              
    /***************    Testing set DOB         */  
    std::cout << "Setting DOB.\n";
    firstPerson.Person::setDateOfBirth(31,12,1964);
    std::cout << "\t" << firstPerson.Person::getDateOfBirth().tm_mday
              << "\t[31]" << std::endl;
    std::cout << "\t" << firstPerson.Person::getDateOfBirth().tm_mon
              << "\t[12]" << std::endl;
    std::cout << "\t" << firstPerson.Person::getDateOfBirth().tm_year
              << "\t[1964-1900 = 64]" << std::endl;
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
    
    /***************    Testing set contact details (various)   */
    std::cout << "Setting email.\n";
    firstPerson.Person::setEmail("guest@your.domain");
    std::cout << "\t" << firstPerson.Person::getEmail()
              << "\t[guest@your.domain]" << std::endl;
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
              
    std::cout << "Setting address.\n";
    firstPerson.Person::setAddress("28 Westhampton Way");
    std::cout << "\t" << firstPerson.Person::getAddress()
              << "\t[28 Westhampton Way]" << std::endl;
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
              
    std::cout << "Setting phone.\n";
    firstPerson.Person::setPhone(8044004408);
    std::cout << "\t" << firstPerson.Person::getPhone()
              << "\t[8044004408]" << std::endl;
  
  
    std::cout << std::endl;
    std::cout << std::setfill ('=') << std::setw (64) << "\n";
    std::cout << std::setfill ('=') << std::setw (64) << "\n";
  
    /*
       
        void setFirstName(std::string fname);
        void setLastName(std::string lname);
        void setDateOfBirth(int day, int month, int year);
        void setAddress(std::string address);
        void setNetID(std::string netid);
        void setURID(int urid);
        void setEmail(std::string email);
        void setPhone(long number);
    */
   
    
    /***********************************************************************
    ****************    Section: Student tests   ***************************
    ***********************************************************************/
    std::cout << "Tests for STUDENT.\n";
    
    Student firstStudent();
    Student secondStudent(
               89321738, "km3lw", "Smartypants", "Joe", 
               6, 8, 2006, "joebiden@richmond.edu",
               "Kansas Land", 911, 30, 3, 2015,
               Student::AS, true, 19
           );
    Student thirdStudent(secondStudent);

    cout << setfill ('=') << setw(64) << endl;

    list<string>::iterator iterator;


    cout << "checking that add Course works, should return Algebra" << endl;
    secondStudent.Student::addCourse("Algebra");
    for(iterator = secondStudent.Student::getCourses().begin(); iterator != secondStudent.Student::getCourses().end(); ++iterator){
        cout << *iterator;
    }

    cout << "checking that remove Course works, should return null" << endl;
    secondStudent.Student::removeCourse("Algebra");
    secondStudent.Student::printCourses();
    cout << "Nothing printed check" << endl;

    cout << "Checking set and print courses" << endl;
    //secondStudent.Student::setCourses("Linear Algebra, Biology 101, Chemistry 101, Music 300, Intro to CS");
    secondStudent.Student::printCourses();

    cout << "Clear courses" << endl;
    secondStudent.Student::clearCourses();
    secondStudent.Student::printCourses();
    cout <<"Nothing is printed check" << endl;




    
        
    /*
        std::list<std::string> getCourses();
        void                   addCourse(std::string course);
        void                   removeCourse(std::string course);
        void                   printCourses();
        void                   setCourses(std::list<std::string> courses);
        void                   clearCourses();

        struct tm              getAdmitDate();
        School                 getSchool();
        double                 getGPA();
        double                 getUnitsCompleted();
        bool                   isFullTime();

        void setAdmitDate(int day, int month, int year);
        void setSchool(School school);
        void setGPA(double gpa);
        void setUnitsCompleted(double units);
        void setFullTimeStatus(bool isFullTime);
        */
    
	return 0;
}
