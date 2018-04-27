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

using namespace wel;
using namespace cppd;


int main(int argc, const char * argv[]) {
    
    bag b;
    b.add(30);
    b.add(400);
    b.add(50);
    b.add(33);
    std::cout << b <<std::endl;
    
    
    
    Preson p1{"ttnn"};
    
    p1.show();
    p1.FormalShow();
    
    Preson p2 {"haha", "bb"};
    p2.show();
    p2.FormalShow();
    
    return 0;
}
