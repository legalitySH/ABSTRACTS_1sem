#include<iostream>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	

	ifstream file("d:\\1 КУРС\\Рефераты\\Шифратор\\simpletext.txt"); // Открытие файла simple.txt
	char* buf = new string;
		// Считка слов из файла
	while (!file.eof()) {
		file.getline(buf, 255);
		cout << buf << "\n";
		}
	file.close();
	cin.get();
	return 0;
	
}