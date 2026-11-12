#pragma once

#include <string>
#include <sstream>

class Object
{
protected:
    mutable std::string name;

public:
    Object(const std::string _name="") : name(_name) {};

    // void changeName(std::string name) {
    //     this->name = name;
    // }


    // void draw(int x=0, int y=0) {};
    
    // std::string str() const {
    //     std::ostringstream oss;
    //     oss << "name : " << this->name;
    //     return oss.str();
    // };
};