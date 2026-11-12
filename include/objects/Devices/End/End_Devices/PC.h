#pragma once

#include <string>
#include <sstream>

#include "objects/Object.h"

class PC : public Object
{
// private:


public:
    PC() : Object("PC") {};
    PC(const std::string& _name) : Object(_name) {};

    void changeName(std::string name) {
        this->name = name;
    }

    void draw(int x=0, int y=0) {};

    std::string str() const {
        std::ostringstream oss;
        oss << "name : " << this->name;
        return oss.str();
    };
};