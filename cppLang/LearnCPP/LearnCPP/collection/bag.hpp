//
//  bag.hpp
//  LearnCPP
//
//  Created by WELCommand on 2018/4/27.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#ifndef bag_hpp
#define bag_hpp
#include "node.hpp"
#include <stdio.h>
#include <iostream>

namespace wel {
    class bag {
    private:
        node * begin;
        node *end;
        int length;
        
    public:
        bag() {begin = nullptr; end = nullptr;};
        
        void add(int item);
        bool isEmpty() const {return begin == nullptr;};
        int size() const {return length;};
        
        friend std::ostream & operator<< (std::ostream & os, bag & b);
        friend bag & operator+= (bag & b, int i);
    };
}





#endif /* bag_hpp */
