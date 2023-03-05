//
//  Class.hpp
//  MF_1
//
//  Created by Liza Stepanova on 06.03.2023.
//

#ifndef Class_hpp
#define Class_hpp

#include <stdio.h>


//#pragma once
#include <iostream>
using namespace std;

class Calculator{
    double znachenie_1;
    double znachenie_2;
public:
    void add(double znachenie_1, double znachenie_2);
    void multiply(double znachenie_1, double znachenie_2);
    void subtract(double znachenie_1, double znachenie_2);
    void divide(double znachenie_1, double znachenie_2);
    void power(double znachenie_1, double znachenie_2);
    // bool set_num1(double znachenie_1);
    // bool set_num2(double znachenie_2);
};

#endif /* Class_hpp */
