//
//  Pseron.hpp
//  LearnCPP
//
//  Created by WELCommand on 2018/4/27.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#ifndef Pseron_hpp
#define Pseron_hpp

#include <stdio.h>
#include <string>
using std::string;

namespace cppd {
    class Preson {
    private:
        static const int LIMIT = 25;
        string lname;
        char fname[LIMIT];
    public:
        Preson() {lname = ""; fname[0] = '\0';};
        Preson(const string & ln, const char *fn = "hey_you");
        void show() const;
        void FormalShow() const;
    };
}


#endif /* Pseron_hpp */
