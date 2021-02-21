#include "func.h"
#include <math.h>

bool isInArea(double x, double y) { // ������� 1
    if (y > 0) { // ����� ������ �������� ��������������
        if (x >= -1 && x <= 1 && y <= 1)
            return true;
        else
            return false;
    }
    else // ����� ������ ������� ���������
    {
        double R = 1; // ������ ����������
        double f = pow(x, 2) + pow(y, 2); // ��������� ��� ���������� x^2+y^2=R^2
        if (f <= pow(R, 2)) // ����� ������ ������� 
            return true;
        else
            return false;
    }
}

double f(double x) { // ������� 2
    return x <= 3 ? pow(x, 2) - 3 * x + 9 : 1 / (pow(x, 3) + 6);
}