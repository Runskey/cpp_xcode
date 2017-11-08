//
//  main.cpp
//  cpp_xcode
//
//  Created by Lin on 12/10/17.
//  Copyright © 2017 Runskey. All rights reserved.
//

#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <limits>
#include "operator_overloadder.hpp"
#include "unknown_type_handling.hpp"
#include "polymorphism.hpp"
#include "prevent_inherit_without_final.hpp"
#include "use_shared_ptr.hpp"

using namespace std;

const bool OPERATOR_OVERLOADDER = false;
const bool NUMERIC_LIMITS = false;
const bool UNKNOWN_RETURN_TYPE = false;
const bool POLYMORPHISM = false;
const bool PREVENT_INHERIT = false;
const bool USE_SHARED_PTR = true;

template <class T>
T GetMax(T a, T b)
{
  T result;
  result = (a>b)? a:b;
  return result;
}

class A {
public:
  A() { cout << "a"; }
  ~A() { cout << "A"; }
};

int i = 1;

/*
const std::vector<int>& get_ints()
{
    std::vector<int> i{ 0, 1, 2, 3 };
    return i;
}
*/

std::vector<int>& get_ints() // notice it's missing the const!
{
    std::vector<int> i{ 0, 1, 2, 3 };
    return i;
}

int main(int argc, const char * argv[]) {
  // insert code here...
  
  /*
  std::cout << "Hello, World!\n";
  
  vector<int> path;
  path.push_back(3);
  
  for (auto i: path)
    std::cout << i << ' ';
  
  cout << "test std::move" << endl;
  std::array<int, 5> arr0{ 0, 1, 2, 3, 4 };
  //std::array<int, 5> arr1{ std::move(arr0) };
  std::array<int, 5> arr1(std::move(arr0));
  
  cout << "length of arr0 is " << arr0.size() << ", length of arr1 is " << arr1.size() << endl;
  
  std::string str0 = "abcde";
  std::string str1 = std::move(str0);
  cout << "length of str0 is " << str0.length() << ", length of str1 is " << str1.length() << endl;
  cout << "size of str0 is " << str0.size() << ", size of str1 is " << str1.size() << endl;
  
  std::vector<int> vec0{0, 1, 2, 3};
  std::vector<int> vec1 = std::move(vec0);
  cout << "size of vec0 is " << vec0.size() << ", size of vec1 is " << vec1.size() << endl;
  
  // test template
  cout << "Output from template function: " << GetMax(5, 6) << endl;
   
   */
  
  
  /*
label:
  cout << "Hello" << endl;
  A a;
  if (i--)
    goto label;
   */
  
  // test operator over-loadding
  if (OPERATOR_OVERLOADDER) {
    operator_overloadder t0, t1(3);
    operator_overloadder t2(t1);
    cout << t0 << t1 << t2;
    cin >> t1;
    t2 = t1;
    t2 += t1;
    t1 += 10;
    cout << t2;
    if(t1 < t2) cout << "t1 < t2";
    else if(t1 == t2) cout << "t1 = t2";
    else /* t1 > t2*/ cout << "t1 > t2";
    cout <<endl;
  }

  
  // use of numeric_limits
  if (NUMERIC_LIMITS) {
    cout << "max(short): " << numeric_limits<short>::max() << endl;
    cout << "min(short): " << numeric_limits<short>::min() << endl;
    cout << "max(int): " << numeric_limits<int>::max() << endl;
    cout << "min(int): " << numeric_limits<int>::min() << endl;
    cout << "max(long): " << numeric_limits<long>::max() << endl;
    cout << "min(long): " << numeric_limits<long>::min() << endl;
    cout << endl;
  }
  
  // unknow return type
  if (UNKNOWN_RETURN_TYPE) {
      cout << "INT * INT returns " << unknown_return_type<int, int>(3.1, 3.1) << endl;
      cout << "INT * FLOAT returns " << unknown_return_type<int, float>(3.1, 3.1) << endl;
      
      int arr[5] = {0};
      decltype(arr) var1;
      cout << (typeid(var1) == typeid(int)) << endl;
      cout << (typeid(var1) == typeid(int *)) << endl;
      cout << (typeid(var1) == typeid(int[5])) << endl;
      cout << (typeid(var1) == typeid(int[])) << endl;
  }
  
    if (POLYMORPHISM) {
        DerivedClass1 d1;
        DerivedClass2 d2;
        
        BaseClass &b1 = d1;
        b1.print();
        BaseClass &b2 = d2;
        b2.print();
        
        Interface(d1);
        Interface(d2);
        
        TruncClass(d1);
        TruncClass(d2);
        
        Interface_p(&d1);
        Interface_p(&d2);
    }
    
    if (PREVENT_INHERIT) {
        //finalClass b;
        Derivation c;
    }
    
    if (USE_SHARED_PTR) {
        shared_ptr<implementation> sp (new implementation());
        //sp = check_shared_ptr(move(sp));
        sp = check_shared_ptr(sp);
        cout << "Object has " << sp.use_count() << " references" << endl;
        check_shared_ptr(move(sp));
        cout << "Object has " << sp.use_count() << " references" << endl;

        //cout << "------------" << endl;
        //check_shared_ptr(shared_ptr<implementation>(new implementation()));
        //cout << "------------" << endl;
    }
    
  return 0;
}
