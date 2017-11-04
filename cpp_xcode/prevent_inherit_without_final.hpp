//
//  prevent_inherit_without_final.hpp
//  cpp_xcode
//
//  Created by Lin on 4/11/17.
//  Copyright © 2017 Runskey. All rights reserved.
//

#ifndef prevent_inherit_without_final_hpp
#define prevent_inherit_without_final_hpp

template <typename T>
class Helper
{
    friend T;
private:
    Helper() {cout<<"Helper::Helper\n";}
    ~Helper(){cout<<"Helper::~Helper\n";}
};

// 这里必须使用虚拟继承，才可以起到阻止Derivation的作用，如果去掉virtual，就不能阻止了

//class finalClass : virtual public Helper<finalClass>
class finalClass : public Helper<finalClass>
{
public:
    finalClass(){cout<<"finalClass::finalClass\n";}
    ~finalClass(){cout<<"finalClass::~finalClass\n";}
};

class Derivation: public finalClass
{
public:
    Derivation(){cout<<"Derivation::Derivation\n";}
    ~Derivation(){cout<<"Derivation::~Derivation\n";}
};

#endif /* prevent_inherit_without_final_hpp */
