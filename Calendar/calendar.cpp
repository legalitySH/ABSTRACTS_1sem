#include<iostream>
using namespace std;
void main() {
        setlocale(LC_ALL, "Russian");
        setlocale(LC_ALL, "Russian");

        int a, b, Feb, i;
        cout << "�������� �� ��� ����������? (0-���; 1-��):";
        cin >> a;
        if (a == 1)
            Feb = 29;
        else
            Feb = 28;

        cout << "������� � ������ ��� ������ ���������� ������ (1-7 = ��-��):";
        cin >> b;
        cout << endl;

        cout << "                     ������" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= 31; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
        cout << endl;
        b = (b + 31) % 7;


        cout << "                     �������" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= Feb; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
        cout << endl;
        b = (b + Feb) % 7;

        cout << "                     ����" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= 31; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
        cout << endl;
        b = (b + 31) % 7;

        cout << "                     ������" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= 30; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
        cout << endl;
        b = (b + 30) % 7;


        cout << "                     ���" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= 31; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
        cout << endl;
        b = (b + 31) % 7;


        cout << "                     ����" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= 30; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
        cout << endl;
        b = (b + 30) % 7;


        cout << "                     ����" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= 31; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
        cout << endl;
        b = (b + 31) % 7;


        cout << "                     ������" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= 31; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
        cout << endl;
        b = (b + 31) % 7;

        cout << "                     ��������" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= 30; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
        cout << endl;
        b = (b + 30) % 7;


        cout << "                     �������" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= 31; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
        cout << endl;
        b = (b + 31) % 7;

        cout << "\t\t\t\t������" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= 30; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
        cout << endl;
        b = (b + 30) % 7;


        cout << "                     �������" << endl << "__________________________________________________" << endl;
        cout << "��\t��\t��\t��\t��\t��\t��" << endl;
        for (i = 1; i < b; i++)
            cout << "\t";
        for (i = 1; i <= 31; i++)
        {
            cout << i << "\t";
            if ((b + i) % 7 == 1)
                cout << endl;
        }
        cout << endl;
    }
