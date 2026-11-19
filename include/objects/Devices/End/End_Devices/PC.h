#pragma once

#include <string>
#include <sstream>

#include "objects/Object.h"
#include "objects/Counter.h"


Counter global_Counter;

class PC : public Object
{
private:
    const std::string type = "end_device";
    const std::string __class__ = "PC";
    const std::string name = global_Counter.getNameWithValue(__class__);

public:
    PC() : Object("") {};
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