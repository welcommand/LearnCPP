//
//  node.hpp
//  LearnCPP
//
//  Created by WELCommand on 2018/4/27.
//  Copyright © 2018年 WELCommand. All rights reserved.
//

#ifndef node_hpp
#define node_hpp

namespace wel {
    struct node {
        int data;
        struct node *next;
    };
}

#endif /* node_hpp */
