//
//  main.cpp
//  LearnCPP
//
//  Created by WELCommand on 2018/4/27.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#include <iostream>
#include "bag.hpp"

using namespace wel;


int main(int argc, const char * argv[]) {
    
    bag b;
    b.add(30);
    b.add(400);
    b.add(50);
    b.add(33);
    
    
    std::cout << b <<std::endl;
    
    return 0;
}
