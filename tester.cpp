// as9kc and hn3gn
#include <iostream>
#include <iomanip>
#include "Person.h"
//#include "Student.h"
#include <iomanip>
using namespace std;

int main()
{

    /***********************************************************************
    ****************    Section: Person tests   ****************************
    ***********************************************************************/

    std::cout << std::setfill ('=') << std::setw (64) << "\n";
    std::cout << "Testing constructors.\n";
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
    
    /*******    Constructor(s)  ********/
    Person firstPerson();
    Person secondPerson(
               12481632, "zz1zz", "ALastName", "AFirstName", 
               14, 3, 1970, "student@richmond.edu",
               "This is where I live.", 8042898000
           );
    Person thirdPerson(secondPerson);
    
    std::cout << "\tConstruction passed.\n";
    
    std::cout << std::setfill ('=') << std::setw (64) << "\n";
    std::cout << std::setfill ('=') << std::setw (64) << "\n";
    
    std::cout << "Testing getters.\n";
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
    
    std::cout << "Name.\n";
    /***************    Testing getFirstName()  */
    std::cout << "\t" << secondPerson.Person::getFirstName()
              << "\t[AFirstName]" << std::endl;
    /***************    Testing getLastName()  */
    std::cout << "\t" << secondPerson.Person::getLastName()
              << "\t[ALastName]" << std::endl;
              
    /***************    Testing getDateOfBirth()  */
    std::cout << "Date of birth.\n";
    std::cout << "\t" << secondPerson.Person::getDateOfBirth().tm_mday
              << "\t[14 (birth date)]" << std::endl;
    std::cout << "\t" << secondPerson.Person::getDateOfBirth().tm_mon
              << "\t[3 (birth month)]" << std::endl;
    std::cout << "\t" << secondPerson.Person::getDateOfBirth().tm_year
              << "\t[70 (birth year since 1900)]" << std::endl;
              
    std::cout << "Contact details.\n";
    /***************    Testing getAddress()  */
    std::cout << "\t" << secondPerson.Person::getAddress()
              << "\t[This is where I live.]" << std::endl;
    /***************    Testing getEmail()  */
    std::cout << "\t" << secondPerson.Person::getEmail()
              << "\t[student@richmond.edu]" << std::endl;
    std::cout << "\t" << secondPerson.Person::getPhone()
              << "\t[8042898000]" << std::endl;
    
    
    
  
      
  
    /*
        std::string  getFirstName();
        std::string  getLastName();
        struct tm    getDateOfBirth(); 
            // see http://www.cplusplus.com/reference/ctime/tm/
        std::string  getAddress();
        std::string  getNetID();
        int          getURID();
        std::string  getEmail();
        long         getPhone();

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
    /*
    Student firstStudent();
    Student secondStudent(
               89321738, "km3lw", "Smartypants", "Joe", 
               6, 8, 2006, "joebiden@richmond.edu",
               "Kansas Land", 911, 30, 3, 2015,
               Student::AS, true, 19
           );
    Student thirdStudent(secondStudent);

    cout << setfill ('=') << setw(64) << endl;

    list<string>::const_iterator iterator;

    for(iterator = Student::courses.begin(); iterator != courses.end(); ++iterator){
        cout << *iterator;
    }

    cout << "checking that add Course works, should return Algebra" << endl;
    secondStudent.Student::addCourse("Algebra");
    for(iterator = Student::courses.begin(); iterator != courses.end(); ++iterator){
        cout << *iterator;
    }

    cout << 

    */
        
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
