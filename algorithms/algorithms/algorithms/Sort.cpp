//
//  Sort.cpp
//  algorithms
//
//  Created by WELCommand on 2018/5/14.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#include "Sort.hpp"

void wel::selection_sort(std::array<int, 10> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j ++) {
            if (l[i] > l[j]) {
                int t =  l[i];
                l[i] = l[j];
                l[j] = t;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        std::cout << l[i] << " ";
    }
}


