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
    Person secondPerson(
               12481632, "zz1zz", "ALastName", "AFirstName", 
               14, 3, 1970, "student@richmond.edu",
               "This is where I live.", 8042898000
           );
    Person thirdPerson(secondPerson);
    
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
            
    /***************    Testing copied object for correctness   */            
    std::cout << std::setfill ('=') << std::setw (64) << "\n";    
    std::cout << "Testing copied object.\n";
    
    std::cout
    << "thirdPerson.Person::getFirstName() == secondPerson.Person::getFirstName()\n"
    << (thirdPerson.Person::getFirstName() == secondPerson.Person::getFirstName()) << "\t[1]\n"
    << "thirdPerson.Person::getLastName() == secondPerson.Person::getLastName()\n"
    << (thirdPerson.Person::getLastName() == secondPerson.Person::getLastName()) << "\t[1]\n"
    << "thirdPerson.Person::getDateOfBirth().tm_mday == secondPerson.Person::getDateOfBirth().tm_mday\n"
    << (thirdPerson.Person::getDateOfBirth().tm_mday == secondPerson.Person::getDateOfBirth().tm_mday) << "\t[1]\n"
    << "thirdPerson.Person::getDateOfBirth().tm_mon == secondPerson.Person::getDateOfBirth().tm_mon\n"
    << (thirdPerson.Person::getDateOfBirth().tm_mon == secondPerson.Person::getDateOfBirth().tm_mon) << "\t[1]\n"
    << "thirdPerson.Person::getDateOfBirth().tm_year == secondPerson.Person::getDateOfBirth().tm_year\n"
    << (thirdPerson.Person::getDateOfBirth().tm_year == secondPerson.Person::getDateOfBirth().tm_year) << "\t[1]\n"
    << "thirdPerson.Person::getAddress() == secondPerson.Person::getAddress()\n"
    << (thirdPerson.Person::getAddress() == secondPerson.Person::getAddress()) << "\t[1]\n"
    << "thirdPerson.Person::getNetID() == secondPerson.Person::getNetID()\n"
    << (thirdPerson.Person::getNetID() == secondPerson.Person::getNetID()) << "\t[1]\n"
    << "thirdPerson.Person::getURID() == secondPerson.Person::getURID()\n"
    << (thirdPerson.Person::getURID() == secondPerson.Person::getURID()) << "\t[1]\n"
    << "thirdPerson.Person::getEmail() == secondPerson.Person::getEmail()\n"
    << (thirdPerson.Person::getEmail() == secondPerson.Person::getEmail()) << "\t[1]\n"
    << "thirdPerson.Person::getPhone() == secondPerson.Person::getPhone()\n"
    << (thirdPerson.Person::getPhone() == secondPerson.Person::getPhone()) << "\t[1]\n";
  
    std::cout << std::setfill ('=') << std::setw (64) << "\n";
    std::cout << std::setfill ('=') << std::setw (64) << "\n";
  
     
    
    /***********************************************************************
    ****************    Section: Student tests   ***************************
    ***********************************************************************/
    std::cout << "\nTests for STUDENT.";
    
    Student firstStudent();
    Student secondStudent(
               89321738, "km3lw", "Smartypants", "Joe", 
               6, 8, 2006, "joebiden@richmond.edu",
               "Kansas Land", 911, 30, 3, 2015,
               Student::AS, true, 19
           );
    Student thirdStudent(secondStudent);

    cout << setfill ('=') << setw(64) << endl;
    std::cout << std::setfill ('=') << std::setw (64) << "\n";
    
    std::cout << "Testing getters and setters.\n";
    std::cout << std::setfill ('.') << std::setw (64) << "\n";
    
    /***************    Testing set and getAdmitDate()  */

    secondStudent.Student::setAdmitDate(5, 7, 2005);

    std::cout << "\t" << secondStudent.Student::getAdmitDate().tm_mday
              << "\t[5 (admit date)]" << std::endl;
    std::cout << "\t" << secondStudent.Student::getAdmitDate().tm_mon
              << "\t[7 (admit month)]" << std::endl;
    std::cout << "\t" << secondStudent.Student::getAdmitDate().tm_year
              << "\t[2005 (admit year since 0)]" << std::endl;
    /***************    Testing set and getSchool()  */
    std::cout << "Set school to LAW.\n"; 
    secondStudent.Student::setSchool(Student::LAW);
    std::cout << "\t" << secondStudent.Student::getSchool()
              << "\t[School : LAW should return 2 for index of the school struct]" << std::endl;
              
    /***************    Testing setGPA() and getGPA()  */
    std::cout << "Set GPA to 3.5.\n";   
    secondStudent.Student::setGPA(3.5);
    std::cout << "\t" << secondStudent.Student::getGPA()
              << "\t[3.5(GPA)]" << std::endl;

    /***************    Testing setUnitsCompleted() and getUnitedCompleted()  */
    std::cout << "Set units completed to 6\n";   
    secondStudent.Student::setUnitsCompleted(6);
    std::cout << "\t" << secondStudent.Student::getUnitsCompleted()
              << "\t[6(Units Completed)]" << std::endl;

    /***************    Testing setGPA() and getGPA()  */
    std::cout << "\t" << secondStudent.Student::isFullTime()
              << "\t[True(FullTimeStatus created in our constructor)]" << std::endl;
    std::cout << "Set full time status to false\n";   
    secondStudent.Student::setFullTimeStatus(false);
    std::cout << "\t" << secondStudent.Student::isFullTime()
              << "\t[False(FullTimeStatus)]" << std::endl;
              
    std::cout << std::setfill ('.') << std::setw (64) << "\n";              


    list<string>::iterator iterator;


    cout << "checking that add Course works, should return Algebra" << endl;
    secondStudent.Student::addCourse("Algebra");
    secondStudent.Student::printCourses();
    cout << "\n" << endl;

    std::cout << std::setfill ('.') << std::setw (64) << "\n";

    cout << "checking that remove Course works, should return null" << endl;
    secondStudent.Student::removeCourse("Algebra");

    secondStudent.Student::printCourses();
    cout << "\n" << endl;
    cout << "Nothing printed check\n" << endl;
    
    std::cout << std::setfill ('.') << std::setw (64) << "\n";

    cout << "Checking set and print courses" << endl;

    list<string> newCourses;
    newCourses.push_back("Linear Algebra");
    newCourses.push_back("Biology 101");
    newCourses.push_back("Chemistry 101");
    newCourses.push_back("Music 300");
    newCourses.push_back("Intro to CS");
     
    secondStudent.Student::setCourses(newCourses);

    secondStudent.Student::printCourses();

    cout << "\n" << endl;
    cout << "Clear courses" << endl;
    secondStudent.Student::clearCourses();
    secondStudent.Student::printCourses();
    cout <<"Nothing is printed check" << endl;

    std::cout << std::setfill ('=') << std::setw (64) << "\n";
    
	return 0;
}
