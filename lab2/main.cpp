#include <iostream>
#include "func.h"

using namespace std;

int main() // ������� 3
{
    setlocale(LC_ALL, "Ru");

    int number;
    cout << "�������� ��� �������. ������� �����, ��������������� ������ �������. 1 - ��� ������� 1, 2 - ��� ������� 2." << "\n"; 
    cin >> number;
    
    switch (number)
    {
    case 1:
        system("cls");
        cout << "��� ������������ ������� 1 ��������� ������ ��� �����, ���������� �����." << "\n" << "x: ";
        double x, y;
        cin >> x;
        cout << "y: ";
        cin >> y;
        cout << "���������: ";
        if (isInArea(x, y) == true)
            cout << "�������� ����� ������ � ������� ������.";
        else
            cout << "�������� ����� �� ������ � ������� ������.";
        break;

    case 2:
        system("cls");
        cout << "��� ������������ ������� 2 ��������� ������ ����� x." << "\n" << "x: ";
        double x1;
        cin >> x1;
        cout << "���������: " << f(x1);
        break;

    default:
        cout << "����������� ������ �����.";
        break;
    }

	return 0;
}