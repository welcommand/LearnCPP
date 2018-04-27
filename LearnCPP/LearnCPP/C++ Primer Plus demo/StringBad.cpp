//
//  StringBad.cpp
//  LearnCPP
//
//  Created by WELCommand on 2018/4/27.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#include "StringBad.hpp"
#include <cstring>

namespace cppd {
    
    int StringBad::sum_strings = 0;
    
    StringBad::StringBad(const char *s) {
        len = (int)std::strlen(s);
        str = new char[len + 1];
        std::strcpy(str, s);
        sum_strings++;
        
        std::cout << sum_strings << ": \"" << str << "\" object create\n";
    }
    
    StringBad::StringBad() {
        len = 4;
        str = new char[len + 1];
        std::strcpy(str, "c++");
        sum_strings++;
        
        std::cout << sum_strings << ": \"" << str << "\" object default create\n";
    }
    
    StringBad::~StringBad() {
        std::cout << "\"" << str << "\" object deleted, ";
        --sum_strings;
        std::cout << sum_strings << " left\n";
        
        delete [] str;
    }
    
    std::ostream & operator<< (std::ostream & os, const StringBad & st) {
        
        os << st.str << "\n";
        
        return os;
    }
    
}
