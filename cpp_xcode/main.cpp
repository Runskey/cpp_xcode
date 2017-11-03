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

using namespace std;

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
label:
  cout << "Hello" << endl;
  A a;
  if (i--)
    goto label;
  
  return 0;
}
