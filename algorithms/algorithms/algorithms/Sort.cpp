//
//  Sort.cpp
//  algorithms
//
//  Created by WELCommand on 2018/5/14.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#include "Sort.hpp"

void wel::selection_sort(std::array<int, 10>& l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j ++) {
            if (l[i] > l[j]) {
                int t =  l[i];
                l[i] = l[j];
                l[j] = t;
            }
        }
    }
}

void wel::insertion_sort(std::array<int, 10> & l) {
    for (int i = 0; i < l.size() - 1 ; i++) {
        int index = 0;
        
        for (int j = i; j >= 0; j--)  {
            if (l[j] < l[i + 1]) {
                index = j + 1;
                break;
            }
        }
        
        int temp = l[i + 1];
        for (int j = i + 1; j > index; j--) {
            l[j] = l[j - 1];
        }
        l[index] = temp;
    }
}


