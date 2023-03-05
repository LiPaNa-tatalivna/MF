//
//  Class.hpp
//  MF_2
//
//  Created by Liza Stepanova on 06.03.2023.
//

#ifndef Class_hpp
#define Class_hpp

#include <stdio.h>


//#pragma once
#include <iostream>
using namespace std;


class Counter{
    int num;
public:
    Counter(int num);
    int get_num();
    void add();
    void minuss();
    // ~Counter();
};


#endif /* Class_hpp */
