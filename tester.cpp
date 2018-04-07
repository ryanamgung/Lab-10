// as9kc and hn3gn
#include <iostream>
#include <iomanip>
#include "Person.h"
#include "Student.h"

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
    /***************    Testing getFirstName()  */
    std::cout << secondPerson.Person::getFirstName()
              << "\n\t[\"AFirstName\"]" << std::endl;
    /***************    Testing getLastName()  */
    std::cout << secondPerson.Person::getLastName()
              << "\n\t[\"ALastName\"]" << std::endl;
    /***************    Testing getDateOfBirth()  */
    std::cout << secondPerson.Person::getDateOfBirth().tm_mday
              << "\n\t[\"14\"]" << std::endl;
    std::cout << secondPerson.Person::getDateOfBirth().tm_mon
              << "\n\t[\"3\"]" << std::endl;
    std::cout << secondPerson.Person::getDateOfBirth().tm_year
              << "\n\t[\"70\"]" << std::endl;
    
    
    
  
      
  
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
    
	return 0;
}
