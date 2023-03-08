#include<iostream>
using namespace std;
void main() {
        setlocale(LC_ALL, "Russian");
        setlocale(LC_ALL, "Russian");

        int a, b, Feb, i;
        cout << "ßâëÿåòñÿ ëè ãîä âèñîêîñíûì? (0-íåò; 1-äà):";
        cin >> a;
        if (a == 1)
            Feb = 29;
        else
            Feb = 28;

        cout << "Ââåäèòå ñ êàêîãî äíÿ íåäåëè íà÷èíàåòñÿ ÿíâàðü (1-7 = ïí-âñ):";
        cin >> b;
        cout << endl;

        cout << "                     ßíâàðü" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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


        cout << "                     Ôåâðàëü" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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

        cout << "                     Ìàðò" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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

        cout << "                     Àïðåëü" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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


        cout << "                     Ìàé" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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


        cout << "                     Èþíü" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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


        cout << "                     Èþëü" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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


        cout << "                     Àâãóñò" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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

        cout << "                     Ñåíòÿáðü" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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


        cout << "                     Îêòÿáðü" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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

        cout << "\t\t\t\tÍîÿáðü" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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


        cout << "                     Äåêàáðü" << endl << "__________________________________________________" << endl;
        cout << "Ïí\tÂò\tÑð\t×ò\tÏò\tÑá\tÂñ" << endl;
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
