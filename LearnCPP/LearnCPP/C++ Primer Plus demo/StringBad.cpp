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
    
    StringBad::StringBad(const StringBad & sb) {
        len = sb.len;
        str = new char[len + 1];
        strcpy(str, sb.str);
        sum_strings++;
    }
    
    std::ostream & operator<< (std::ostream & os, const StringBad & st) {
        
        os << st.str << "\n";
        
        return os;
    }
    
    StringBad & StringBad::operator=(const StringBad & st) {
        if (&st == this) {
            return *this;
        }
        
        delete [] str;
        len = st.len;
        str = new char[len];
        strcpy(str, st.str);
        return *this;
    }
    
    bool operator== (const StringBad &s1, const StringBad &s2) {
        return strcmp(s1.str, s2.str) == 0;
    }
    
    bool operator> (const StringBad &s1, const StringBad &s2) {
        return s2 < s1;
    }
    
    bool operator< (const StringBad &s1, const StringBad &s2) {
        return strcmp(s1.str, s1.str) < 0;
    }
}
