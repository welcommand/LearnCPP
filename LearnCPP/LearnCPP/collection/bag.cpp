//
//  bag.cpp
//  LearnCPP
//
//  Created by WELCommand on 2018/4/27.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#include "bag.hpp"

namespace wel{
    void bag::add(int item) {
        
        node *n = new node;
        n->data = item;
        n->next = nullptr;
        
        
        if (this->begin == nullptr) {
            this->begin = n;
            this->end = n;
        }
        
        this->end->next = n;
        this->end = n;
    }
    
    std::ostream & operator<< (std::ostream & os, bag & b) {
        for (node *p = b.begin; p != nullptr; p = p->next) {
            os << p->data << "  ";
        }
        return os;
    }
    
    bag & operator+= (bag & b, int i) {
        b.add(i);
        return b;
    }
    
}
