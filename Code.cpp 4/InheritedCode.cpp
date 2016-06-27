//https://www.hackerrank.com/contests/code-cpp-4/challenges/inherited-code

/* Define the exception here */
#include <exception>
#include <stdexcept>
#include <sstream>
class BadLengthException {
    int length;
    
  public:
    BadLengthException(int length): length{ length } {}

    const char* what() const{
        ostringstream msg;
        msg << length;
        return msg.str().c_str();
    }
    
};