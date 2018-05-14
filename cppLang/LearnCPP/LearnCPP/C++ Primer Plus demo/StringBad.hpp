//
//  StringBad.hpp
//  LearnCPP
//
//  Created by WELCommand on 2018/4/27.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#ifndef StringBad_hpp
#define StringBad_hpp

#include <stdio.h>
#include <iostream>

namespace cppd {
    class StringBad {
    private:
        char *str;
        int len;
        static int sum_strings;
    public:
        StringBad();
        StringBad(const char *s);
        StringBad(const StringBad & sb);
        ~StringBad();
        
        int length() const {return this->len;};
        
        
        friend bool operator== (const StringBad &s1, const StringBad &s2);
        friend bool operator> (const StringBad &s1, const StringBad &s2);
        friend bool operator< (const StringBad &s1, const StringBad &s2);
        
        
        friend std::ostream & operator<< (std::ostream & os, const StringBad & st);
        StringBad & operator=(const StringBad &st);
    };
}

#endif /* StringBad_hpp */
