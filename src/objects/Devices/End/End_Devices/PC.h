#pragma once

#include <string>
#include <sstream>

class PC
{
private:
    mutable std::string name;

public:
    PC() : name("PC") {};


    void draw(int x=0, int y=0) {};
    std::string str() const {
        std::ostringstream oss;
        oss << "name : " << this->name;
        return oss.str();
    };
};