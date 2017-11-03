//
//  operator_overloadder.hpp
//  cpp_xcode
//
//  Created by Lin on 3/11/17.
//  Copyright © 2017 Runskey. All rights reserved.
//

#ifndef operator_overloadder_hpp
#define operator_overloadder_hpp

#include <iostream>

// overload <, +, +=, =, ==, <<, >>

class operator_overloadder {
  
public:
  int v;
  operator_overloadder():v(0){}
  operator_overloadder(const int &a):v(a){}
  operator_overloadder(const operator_overloadder &t1):v(t1.v){}
  
  bool operator<(const operator_overloadder &t1) const {
    return (v < t1.v);
  }
  
  bool operator<(const int &t1) const {
    return (v < t1);
  }
  
  inline friend bool operator<(const int &a, const operator_overloadder &t1) {
    return (a<t1.v);
  }
  
  /*以下重载赋值号 = */
  //对象间赋值
  operator_overloadder & operator=(const operator_overloadder &t1){
    v = t1.v;
    return *this;
  }
  //int赋值给对象
  operator_overloadder & operator=(const int &t1){
    v = t1;
    return *this;
  }
  
  /*以下重载加号 + */
  //对象加上 int
  operator_overloadder operator+(const int & a){
    operator_overloadder t1;
    t1.v = v + a;
    return t1;
  }
  //对象加对象
  operator_overloadder operator+(operator_overloadder &t1){
    operator_overloadder t2;
    t2.v = v + t1.v;
    return t2;
  }
  
  /*以下重载加等号 += */
  //对象加上对象
  operator_overloadder &operator+=(const operator_overloadder &t1){
    v += t1.v;
    return *this;
  }
  //对象加上int
  operator_overloadder &operator+=(const int &a){
    v += a;
    return *this;
  }
  
  /*以下重载双等号 == */
  //对象==对象
  bool operator==(const operator_overloadder &t1)const{
    return (v == t1.v);
  }
  //对象==int
  bool operator==(const int &t1)const{
    return (v == t1);
  }
  
  /*以下重载 输入>> 输出<< */
  /*友元函数，输出对象*/
  friend inline std::ostream & operator << (std::ostream & os, operator_overloadder &t1){
    std::cout << "class t(" << t1.v << ")" << std::endl;
    return os;
  }
  /*友元函数，输入对象*/
  friend inline std::istream & operator >> (std::istream & is, operator_overloadder &t1){
    std::cin >> t1.v;
    return is;
  }
  
  
};

#endif /* operator_overloadder_hpp */
