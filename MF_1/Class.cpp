//
//  Class.cpp
//  MF_1
//
//  Created by Liza Stepanova on 06.03.2023.
//
#include "Class.hpp"
#include <cmath>


void Calculator::add(double znachenie_1, double znachenie_2){
    cout << endl << znachenie_1 << " + "<< znachenie_2 << " = " << znachenie_1 + znachenie_2 << endl;
};

void Calculator::multiply(double znachenie_1, double znachenie_2){
    cout << endl << znachenie_1 << " * "<< znachenie_2 << " = " << znachenie_1 * znachenie_2 << endl;
    
};

void Calculator::subtract(double znachenie_1, double znachenie_2){
    cout << endl << znachenie_1 << " - "<< znachenie_2 << " = " << znachenie_1 - znachenie_2 << endl;
};

void Calculator::divide(double znachenie_1, double znachenie_2){
    cout << endl << znachenie_1 << " / "<< znachenie_2 << " = " << znachenie_1 / znachenie_2 << endl;
};

void Calculator::power(double znachenie_1, double znachenie_2){
    cout << endl << znachenie_1 << " в степени "<< znachenie_2 << " = " << pow(znachenie_1, znachenie_2)<< endl;
}


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
#include "Class.hpp"
