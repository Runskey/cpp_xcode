//
//  use_shared_ptr.cpp
//  cpp_xcode
//
//  Created by Lin on 6/11/17.
//  Copyright © 2017 Runskey. All rights reserved.
//

#include "use_shared_ptr.hpp"

void test_shared_ptr()
{
    shared_ptr<implementation> sp1(new implementation());
    cout<<"The Sample now has "<<sp1.use_count()<<" references\n";
    
    shared_ptr<implementation> sp2 = sp1;
    cout<<"The Sample now has "<<sp2.use_count()<<" references\n";
    
    sp1.reset();
    cout<<"After Reset sp1. The Sample now has "<<sp2.use_count()<<" references\n";
    
    sp2.reset();
    cout<<"After Reset sp2.\n";
}

shared_ptr<implementation> check_shared_ptr(shared_ptr<implementation> sp)
{
    cout << "--------- Begin" << endl;
    cout << "Object has " << sp.use_count() << " references" << endl;
    cout << "--------- End" << endl;
    
    return sp;
}
