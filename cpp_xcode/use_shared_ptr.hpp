//
//  use_shared_ptr.hpp
//  cpp_xcode
//
//  Created by Lin on 6/11/17.
//  Copyright © 2017 Runskey. All rights reserved.
//

#ifndef use_shared_ptr_hpp
#define use_shared_ptr_hpp

#include <iostream>
using namespace std;

class implementation
{
public:
    implementation() { cout << "creating implementation\n"; }
    ~implementation() { cout <<"destroying implementation\n"; }
    void do_something() { cout << "did something\n"; }
};

void test_shared_ptr();

shared_ptr<implementation> check_shared_ptr(shared_ptr<implementation> sp);


#endif /* use_shared_ptr_hpp */
