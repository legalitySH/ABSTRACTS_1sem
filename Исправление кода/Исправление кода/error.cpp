#include<iostream>
#define ISTRING_MAX 50
using namespace std;
void voutput(void* pobject, char cflag);
void main()
{
    int* pi;
    char* psz;
    float* pf;
    char cresponse, cnewline;
    cout << "Please enter the dynamic data type\n";
    cout << "you woud like to create.\n\n";
    cout << "Use (s)tring, (i)nt or (f)loat";
    cout << endl;
    cin >> cresponse;
    cin.get(cnewline);
    switch (cresponse)
    {
    case 's':
        psz = new char[ISTRING_MAX];
        cout << "\nPlease enter a string: ";
        cin.get(psz, ISTRING_MAX);
        voutput(psz, cresponse);
        break;
    case 'i':
        pi = new int;
        cout << "\nPlease enter an integer: ";
        cin >> *pi;
        voutput(pi, cresponse);
        break;
    case 'f':
        pf = new float;
        cout << "\nPlease enter a float: ";
        cin >> *pf;
        voutput(pf, cresponse);
        break;
    default:
        cout << "\n\nObject type not implemented!";
    }

}

void voutput(void* pobject, char cflag)
{
    switch (cflag)
    {
        cout << "\n\nThe string read in: " << (char*)pobject;
        delete pobject;
        break;
    case 'i':
        cout << "\n\nThe integer read in: " << *((int*)pobject);
        delete pobject;
        break;
    case 'f':
        cout << "\n\nThe float read in: " << *((float*)pobject);
        delete pobject;
        break;
    }
    cout << endl;
}