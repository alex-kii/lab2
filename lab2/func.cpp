#include "func.h"
#include <math.h>

bool isInArea(double x, double y) { // задание 1
    if (y > 0) { // Точка внутри верхнего прямоугольника
        if (x >= -1 && x <= 1 && y <= 1)
            return true;
        else
            return false;
    }
    else // Точка внутри нижнего полукруга
    {
        double R = 1; // Радиус окружности
        double f = pow(x, 2) + pow(y, 2); // Уравнение для окружности x^2+y^2=R^2
        if (f <= pow(R, 2)) // Точка внутри радиуса 
            return true;
        else
            return false;
    }
}

double f(double x) { // задание 2
    return x <= 3 ? pow(x, 2) - 3 * x + 9 : 1 / (pow(x, 3) + 6);
}