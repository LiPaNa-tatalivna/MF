//
//  Class.cpp
//  MF_2
//
//  Created by Liza Stepanova on 06.03.2023.
//

#include "Class.hpp"

//#include "Class.h"
// #include <cmath>


Counter::Counter(int num){
    this -> num = num;
}
int Counter::get_num() { return num; } // геттер
void Counter::add(){ num++;}
void Counter::minuss(){ num--;}


// bool Calculator::set_num1(double znachenie_1){
//     if (znachenie_1 != 0){
//         this -> znachenie_1 = znachenie_1;
//         return true;
//     }
//     else{
//         cout << "Неверный ввод!\n";
//         return false;
//     }
// };

// bool Calculator::set_num2(double znachenie_2){
//     if (znachenie_2 != 0){
//         this -> znachenie_2 = znachenie_2;
//         return true;
//     }
//     else{
//         cout << "Неверный ввод!\n";
//         return (false);
//     }
// };
