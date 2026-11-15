#pragma once

#include <iostream>
#include <unordered_map>
#include <string>


class Counter
{

public:
    std::string __class__ = "Counter";
    std::unordered_map<std::string, int> dictionary = {
        {"KEY", 0}, {"KEY2", 3}
    };

    Counter() {}; 
    
    void incr(std::string) {
        
    }

    void add(std::string key) {
        dictionary.insert({key, 0})
    }

    void change(std::string key, newValue) {
        auto it = 
        if (it != um.end()) {
            
            um.erase(it); // remove old key
            um.insert({key, value}); // insert new key
}
    }


    std::string str() const {
        std::ostringstream oss;
        oss << "[";
        auto &it = dictionary.begin();
        
        while (it != dictionary.end()) {
            oss << "{" << it->first << ":" << it->second << "}";

            auto nexitIt = it;
            ++nexitIt;
            if (nexitIt != dictionary.end()) {
                oss << ", ";
            }
            ++it;
        }
        oss << "]";
        
        return oss.str();
    };
};