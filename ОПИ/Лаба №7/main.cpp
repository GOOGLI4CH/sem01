#include <iostream>
#include<stdio.h>
#include <windows.h>

using namespace std;

void error()
{
    cout << "��������� ����" << endl;
}
    using namespace std;
    int main()
    {
        setlocale(LC_CTYPE, "Russian");
        int a; char c, f;
        printf("1 � ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������,\n ���� ������ ������ ���������� ��������\0");
        printf("\n2 � ����������� ������� �������� ����� � Windows - 1251 ����� � ��������� � �������� ���������,\n ���� ������ ������ �������� ��������;");
        printf("\n3 � ����� � ������� ���� �������, ���������������� ��������� �����;");
        printf("\n4 � ����� �� ���������.");
        printf("\n----------------------------------------------------------------------------------------------");
        printf("\n������� ������� = ");
        cin >> a;
        switch (a)

    case 1: {
            cout << "������� ����� � ��������� ���������: \n"; cin >> c;
            cout << "������� ����� � �������� ���������: \n"; cin >> f;
            if (int(f) - int(c) != 32)
            {
                error();
                break;
            }
            if (65 <= c && c <= 90) //������� �������
            {
                cout << "��� ������ �������:" << "0x" << int(c) << endl;
            }
            else
            {
                error();
            }
            if (97 <= f && f <= 122) //������ �������
            {
                cout << "��� ������ �������:" << "0x" << int(f) << endl;
            }
            else
            {
                error();
            }
            cout << "������� ����� ������ = " << int(f) - int(c);
            break;

    case 2: {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        char c, f;
        cout << "������� ��������� ������ ��������� ";
        cin >> c;
        cout << "������� �������� ������ ��������� ";
        cin >> f;
        if (-64 <= c && c <= -33) //������ �������
        {
            cout << "0x" << hex << int(c) << endl;
        }
        else
        {
            error();
        } 
        if (-32 <= f && f <= -1) //������� �������
        {
            cout << "0x" << hex << int(f) << endl;
        }
        else
        {
            error();
        }
        cout << "������� ����� ������ = " << int(f) - int(c);
    }
          break;

    case 3:
        cout << "������� ����� :";
        cin >> c;
        if (48 <= c && c <= 57)
        {
            cout << "��� ������� = " << "0x" << hex << int(c) << endl;
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