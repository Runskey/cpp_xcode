//
//  polymorphism.cpp
//  cpp_xcode
//
//  Created by Lin on 4/11/17.
//  Copyright © 2017 Runskey. All rights reserved.
//

#include "polymorphism.hpp"

void Interface(BaseClass &b)
{
    b.print();
}

void TruncClass(BaseClass b)
{
    b.print();
}

void Interface_p(BaseClass *b)
{
    b->print();
}
