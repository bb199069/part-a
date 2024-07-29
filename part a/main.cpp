//Branden Bowling
//  CIS1202
//  part a
//7/28/24.

#include <iostream>
#include <stdexcept>
using namespace std;


#include <iostream>
#include <stdexcept>

using namespace std;

class invalidCharacterException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid Character: must be (A-Z, a-z).";
    }
};


class invalidRangeException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid Range: not a letter.";
    }
};


char character(char start, int offset) {
    
    if (!((start >= 'A' && start <= 'Z') || (start >= 'a' && start <= 'z'))) {
        throw invalidCharacterException();
    }
    char target = start + offset;

    if ((start >= 'A' && start <= 'Z' && (target < 'A' || target > 'Z')) ||
        (start >= 'a' && start <= 'z' && (target < 'a' || target > 'z'))) {
        throw invalidRangeException();
    }

    return target;
}

int main() {
    try {
        cout << "character('a', 1) returns: " << character('a', 1) << endl;
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    try {
        cout << "character('a', -1) returns: ";
        character('a', -1);
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    try {
        cout << "character('Z', -1) returns: " << character('Z', -1) << endl;
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    try {
        cout << "character('?', 5) returns: ";
        character('?', 5);
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    try {
        cout << "character('A', 32) returns: ";
        character('A', 32);
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
