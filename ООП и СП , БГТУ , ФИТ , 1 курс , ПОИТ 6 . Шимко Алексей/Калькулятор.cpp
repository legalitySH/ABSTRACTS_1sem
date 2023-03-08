#include<iostream>
int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int a, b, res;
	char op;
	cout << "\nВведите 1й операнд : "; cin >> a;
	cout << "\nВведите знак операции : "; cin >> op;
	cout << "\nВведите 2й операнд : "; cin >> b;
	bool f = true;

	switch (op) {
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*': res = a * b; break;
	case '/': res = a / b; break;
	default: "nНеизвестная операция"; f = false;
	}

	if (f) cout << "\nРезультат: " << res;
	return 0;
}