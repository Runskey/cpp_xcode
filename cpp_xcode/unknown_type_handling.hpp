//
//  unknown_type_handling.hpp
//  cpp_xcode
//
//  Created by Lin on 4/11/17.
//  Copyright © 2017 Runskey. All rights reserved.
//

#ifndef unknown_type_handling_hpp
#define unknown_type_handling_hpp

//#include <stdio.h>

// Note that in C++14 you don't need the decltype, templates can deduce an auto return type
// See http://en.cppreference.com/w/cpp/language/auto

// C++ language has no such thing as typeof. You must be looking at some compiler-specific extension. If you are talking about GCC's typeof, then a similar feature is present in C++11 through the keyword decltype. Again, C++ has no such typeof keyword.
// typeid is a C++ language operator which returns type identification information at run time. It basically returns a type_info object, which is equality-comparable with other type_info objects.

// what's the difference between auto and decltype?
// See https://www.cnblogs.com/QG-whz/p/4952980.html


template <typename X, typename Y>
auto unknown_return_type(X x, Y y) -> decltype(x*y)
{
    return x * y;
}

#endif /* unknown_type_handling_hpp */
