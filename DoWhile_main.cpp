#include <iostream>
#include <cmath>
#include "../fun.h"
using namespace std;
using namespace DoWhileLoop;
void main()
{
    int n, k;
    double eps;
    char a;
menu:
    cout << "Select the task number:\n" << "1.Task1\n" << "2.Task2\n" << "3.Task3\n" << "4.Task4\n" << "5.Task5\n" << "6.Exit\n";
    cout << "The task number is "; cin >> a;
    switch (a)
    {
    case '1':
        system("cls");
        cout << "Enter a value n = "; cin >> n;
        cout << "The calculation result is " << summ(n) << endl;
        system("pause");
        system("cls");
        goto menu;
    case '2':
        system("cls");
        cout << "Enter a value eps = "; cin >> eps;
        cout << "The calculation result is " << summ2(eps) << endl;
        system("pause");
        system("cls");
        goto menu;
    case '3':
        system("cls");
        cout << "Enter a value n = "; cin >> n;
        cout << "Enter a value k = "; cin >> k;
        print(n, k);
        system("pause");
        system("cls");
        goto menu;
    case '4':
        system("cls");
        cout << "Enter a value eps = "; cin >> eps;
        cout << "The calculation result is " << findFirstElement(eps) << endl;
        system("pause");
        system("cls");
        goto menu;
    case '5':
        system("cls");
        cout << "Enter a value eps = "; cin >> eps;
        cout << "The calculation result is " << findNegativeFirstElement(eps) << endl;
        system("pause");
        system("cls");
        goto menu;
    case '6':
        break;
    }
}