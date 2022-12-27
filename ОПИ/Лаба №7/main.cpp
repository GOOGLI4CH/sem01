#include <iostream>
#include<stdio.h>
#include <windows.h>

using namespace std;

void error()
{
    cout << "Ошибочный ввод" << endl;
}
    using namespace std;
    int main()
    {
        setlocale(LC_CTYPE, "Russian");
        int a; char c, f;
        printf("1 – определение разницы значений кодов в ASCII буквы в прописном и строчном написании,\n если введен символ латинского алфавита\0");
        printf("\n2 – определение разницы значений кодов в Windows - 1251 буквы в прописном и строчном написании,\n если введен символ русского алфавита;");
        printf("\n3 – вывод в консоль кода символа, соответствующего введенной цифре;");
        printf("\n4 – выход из программы.");
        printf("\n----------------------------------------------------------------------------------------------");
        printf("\nВведите вариант = ");
        cin >> a;
        switch (a)

    case 1: {
            cout << "Введите букву в прописном написании: \n"; cin >> c;
            cout << "Введите букву в строчном написании: \n"; cin >> f;
            if (int(f) - int(c) != 32)
            {
                error();
                break;
            }
            if (65 <= c && c <= 90) //верхний регистр
            {
                cout << "Код вашего символа:" << "0x" << int(c) << endl;
            }
            else
            {
                error();
            }
            if (97 <= f && f <= 122) //нижний регистр
            {
                cout << "Код вашего символа:" << "0x" << int(f) << endl;
            }
            else
            {
                error();
            }
            cout << "Разница между кодами = " << int(f) - int(c);
            break;

    case 2: {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        char c, f;
        cout << "Введите прописной символ кириллицы ";
        cin >> c;
        cout << "Введите строчный символ кириллицы ";
        cin >> f;
        if (-64 <= c && c <= -33) //нижний регистр
        {
            cout << "0x" << hex << int(c) << endl;
        }
        else
        {
            error();
        } 
        if (-32 <= f && f <= -1) //верхний регистр
        {
            cout << "0x" << hex << int(f) << endl;
        }
        else
        {
            error();
        }
        cout << "Разница между кодами = " << int(f) - int(c);
    }
          break;

    case 3:
        cout << "Введите цифру :";
        cin >> c;
        if (48 <= c && c <= 57)
        {
            cout << "Код символа = " << "0x" << hex << int(c) << endl;
        }
        else
        {
            error();
        }
        break;

    case 4:
        return(0);
        }
    }