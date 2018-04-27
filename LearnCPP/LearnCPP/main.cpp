//
//  main.cpp
//  LearnCPP
//
//  Created by WELCommand on 2018/4/27.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#include <iostream>
#include "bag.hpp"
#include "Pseron.hpp"
#include "StringBad.hpp"

using namespace wel;
using namespace cppd;
using std::cout;
using std::endl;

void stringBadTest();
void bagTest();
void presonTest();


int main(int argc, const char * argv[]) {
    
//    bagTest();
//    presonTest();
    
    
    stringBadTest();
    

    return 0;
}



#pragma mark-
#pragma mark- stringBadTest

void call1 (StringBad & rsb) {
    cout << "by ref     " << rsb << endl;
}

void call2 (StringBad sb) {
    cout << "by value    " << sb << endl;
}

void stringBadTest() {
    
    {
        StringBad str1 {"str 1 haha"};
        StringBad str2 {"str 2 XXXXXX"};
        StringBad str3 {"str 3 ccccc"};
        
        cout << endl <<str1 << str2 << str3 << endl;

        call1(str1);
        cout << "str1 : " <<str1;
        call2(str2);
        cout << "str2 : " <<str2 << endl;
        
        StringBad str4 = str3;
        cout << str3 << str4 << endl;
        
        StringBad str5;
        str5 = str1;
        
        cout << str1 << str5 << endl;
        
        
    }
    
}

#pragma mark-
#pragma mark- bag

void bagTest () {
    bag b;
    for (int i = 0; i < 10; i++) {
        b += i * 2;
    }
    std::cout << b <<std::endl;
}

#pragma mark-
#pragma mark- preson

void presonTest() {
    Preson p1{"ttnn"};
    
    p1.show();
    p1.FormalShow();
    
    Preson p2 {"haha", "bb"};
    p2.show();
    p2.FormalShow();
}
