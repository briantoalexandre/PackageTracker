#pragma once

#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>


class Counter
{
private:
    int increment(std::string key) {
        auto it = dictionary.find(key);
        int count = 0;
        if (it != dictionary.end()) {
            count = it->second;
            dictionary.erase(it);
        }
        dictionary.insert({key, ++count});
        return count;
    }

public:
    std::string __class__ = "Counter";
    std::unordered_map<std::string, int> dictionary = {
        {"KEY", 0}, {"KEY2", 3}
    };

    Counter() {}; 
    
    std::string getNameWithValue(std::string name) {
        int _ = increment(name);
        std::ostringstream oss;
        oss << name << " " << _;
        return oss.str();
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

extern Counter global_Counter;