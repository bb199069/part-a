//Branden Bowling
//  CIS1202
//  part a
//7/28/24.

#include <iostream>
#include <stdexcept>
using namespace std;


class invalidCharacterExeption : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid Character: The start character must be a letter (A-Z, a-z)"
    }
    
}
