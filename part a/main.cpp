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
        return "Invalid Character: must be a letter (A-Z, a-z).";
    }
    
};

class invalidRangeExcpetion: public exception { public:
    const char* what() const noexcept override {
        return "Invalid range: not a letter.";
    }
};
char character(char start, int offset) {
    if (!((start >= 'A' && start <='Z') || (start >= 'a' && start <= 'z'))){
        throw  invalidCharacterExeption();
    }
    char target = start + offset;
}
