//
//  main.cpp
//  algorithms
//
//  Created by WELCommand on 2018/5/14.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#include <iostream>
#include "Sort.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::array<int, 10> l {10,8,11,4,6,8,1,5,3,5};
    
    wel::selection_sort(l);
    
    return 0;
}
