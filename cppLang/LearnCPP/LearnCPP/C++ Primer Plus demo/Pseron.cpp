//
//  Pseron.cpp
//  LearnCPP
//
//  Created by WELCommand on 2018/4/27.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#include "Pseron.hpp"
#include <iostream>

namespace cppd {
    Preson::Preson(const string & ln, const char *fn) {
        lname = ln;
        strcpy(fname, fn);
    }
    
    void Preson::show() const {
        std::cout << this->fname << " " <<this->lname << std::endl;
    }
    
    void Preson::FormalShow() const {
        std::cout << this->lname + "," + this->fname << std::endl;
    }
}
