#include <iostream>
#include "fraction.h"
#include "Money.h"
using namespace std;

void testmoney() {
    unsigned char h;
    unsigned char h1;
    int b;
    long c;
    int a, a1;
    long null;
    double str;
    cout << "����� ���-�� ������" << endl;
    cin >> c;
    cout << "����� ���-�� ������" << endl;
    cin >> b;
    h = b;
    Money first(c, h);
    Money third(c, h);
    Money fourth(c, h);
    cout << "��� ����� ������ � ������ ?" << endl << "1.����������" << endl << "2.��������" << endl << "3.�������� " << endl << "4.������" << endl << "5.����������" << endl;
    cin >> a;
    if (a == 1) {
        cout << "����� ���-�� ������" << endl;
        cin >> c;
        cout << "����� ���-�� ������" << endl;
        cin >> b;
        h1 = b;
        Money second(c, h1);
        third.Sum(second, third);
        third.Cout();

        cout << "������ ������ �� ����� ,  �������� �� ������� ,������ �� �������  ��� ����� ? 1/2/3/4" << endl;
        cin >> a1;
        if (a1 == 1) {
            cout << "������� �����" << endl;
            cin >> null;
            fourth.Degres(null, third);
            fourth.Cout();
        }
        if (a1 == 2) {
            cout << "������� �����" << endl;
            cin >> str;
            fourth.Multi(str, third);
            fourth.Cout();

        }
        if (a1 == 3) {
            cout << "������� �����" << endl;
            cin >> str;
            fourth.Degres(str, third);
            fourth.Cout();

        }
        if (a1 == 4) {
            return ;
        }
    }
    if (a == 2) {
        cout << "����� ���-�� ������" << endl;
        cin >> c;
        cout << "����� ���-�� ������" << endl;
        cin >> b;
        h = b;
        Money second(c, h);
        third.Minus(first, second);
        third.Cout();
    }
    if (a == 3) {
        cout << "������� �����" << endl;
        cin >> null;
        third.Multi(null, first);
        third.Cout();
    }
    if (a == 4) {
        cout << "������� �����" << endl;
        cin >> null;
        third.Degres(null, first);
        third.Cout();
    }
    if (a == 5) {
        cout << "����� ���-�� ������" << endl;
        cin >> c;
        cout << "����� ���-�� ������" << endl;
        cin >> b;
        h = b;
        Money second(c, h);
        if (first.Sravn(second)) {
            cout << "����� ";
            first.Cout();
            cout << "������  ";
        }
        else {
            cout << "����� ";
            second.Cout();
            cout << " ������  ";
        }
    }

    return ;
}

int main() {
	setlocale(0, "rus");
    
    Money* b = new Money(6, 40);
    Money* c = new Money(3, 4);
    Pair* g = new fraction(3, 4);
    Pair* t = new fraction(3, 4);
    double first = 10;
    double second = 2;
    cout << "g + t : " << *(fraction*)g->operator+(t) << endl;
    cout << "g - t : " << *(fraction*)g->operator-(t) << endl;
    cout << "g * first : " << *(fraction*)g->operator*(first) << endl;

    cout << "b + c : " << *(Money*)b->operator+(c) << endl;
    cout << "b - c : " << *(Money*)b->operator-(c) << endl;
    cout << "b * first : " << *(Money*)b->operator*(first) << endl;
    cout << "b * second : " << *(Money*)b->operator*(second) << endl;
}