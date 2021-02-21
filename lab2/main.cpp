#include <iostream>
#include "func.h"

using namespace std;

int main() // задание 3
{
    setlocale(LC_ALL, "Ru");

    int number;
    cout << "Выберите тип задания. Введите цифру, соответствующую номеру задания. 1 - для задания 1, 2 - для задания 2." << "\n"; 
    cin >> number;
    
    switch (number)
    {
    case 1:
        system("cls");
        cout << "Для демонстрации задания 1 требуется ввести два числа, координаты точки." << "\n" << "x: ";
        double x, y;
        cin >> x;
        cout << "y: ";
        cin >> y;
        cout << "Результат: ";
        if (isInArea(x, y) == true)
            cout << "Заданная точка входит в область фигуры.";
        else
            cout << "Заданная точка не входит в область фигуры.";
        break;

    case 2:
        system("cls");
        cout << "Для демонстрации задания 2 требуется ввести число x." << "\n" << "x: ";
        double x1;
        cin >> x1;
        cout << "Результат: " << f(x1);
        break;

    default:
        cout << "Неправильно выбран номер.";
        break;
    }

	return 0;
}