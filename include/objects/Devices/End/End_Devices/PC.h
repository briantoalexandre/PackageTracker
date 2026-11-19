#pragma once

#include <string>
#include <sstream>

#include "objects/Object.h"
#include "objects/Counter.h"


Counter global_Counter;

class PC : public Object
{
private:
    inline static const std::string type = "end_device";

public:
    inline static const std::string __class__ = "PC"; 
    PC() : Object(global_Counter.getNameWithValue_Increment(__class__)) {};
    PC(const std::string& _name) : Object(_name) {};

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