//
//  polymorphism.hpp
//  cpp_xcode
//
//  Created by Lin on 4/11/17.
//  Copyright © 2017 Runskey. All rights reserved.
//

#ifndef polymorphism_hpp
#define polymorphism_hpp

#include <iostream>
using namespace std;

class BaseClass {
    const int bc = 100;
    
public:
    virtual const void print() {
        cout << "In a base class, member = " << bc << endl;
    }
};

class DerivedClass1: public BaseClass {
    int dc1 = 1;
public:
    virtual const void print() {
        cout << "In derived 1, member = " << dc1 << endl;
    }
};

class DerivedClass2: public BaseClass {
    int dc2 = 2;
public:
    virtual const void print() {
        cout << "In derived 2, member = " << dc2 << endl;
    }
};

class FinalDerivedClass final: public BaseClass {
    int fdc = 3;
public:
    virtual const void print() {
        cout << "In final derived, member = " << fdc << endl;
    }
};


void Interface(BaseClass &b);

#endif /* polymorphism_hpp */
