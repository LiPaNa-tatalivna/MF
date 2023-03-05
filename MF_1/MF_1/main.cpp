#include <iostream>
#include "Class.hpp"

int main()
{
    Calculator calc;
    cout << "Приветсвую! \nЭто программа калькулятор,";
    cout << "\nОна поможет вам поапирировать над двумя значениями";
    int vixod;
    do{
        double num1, num2;
        cout << "\nВведите первое число: ";
        // do{
        //     cin >> num1;
        // }while (calc.set_num1(num1) == false);
        cin >> num1;
        cout << "Введите второе число: ";
        // do{
        //     cin >> num2;
        // }while (false == calc.set_num2(num2));
        cin >> num2;
        
        cout <<"Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        int a;
        cin >> a;
    switch(a)
    {
        case 1:
            calc.add(num1, num2);
            break;
        case 2:
            calc.subtract(num1, num2);
            break;
        case 3:
            calc.multiply(num1, num2);
            break;
        case 4:
            calc.divide(num1, num2);
            break;
        case 5:
            calc.power(num1, num2);
            break;
        
    }

        cout << "\nВведите 0, если хотите выйти: ";
        cin >> vixod;
    }while (vixod != 0);
    
    return 0;
}
