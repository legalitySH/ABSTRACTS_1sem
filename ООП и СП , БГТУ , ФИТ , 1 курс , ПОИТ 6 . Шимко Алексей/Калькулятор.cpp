#include<iostream>
int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int a, b, res;
	char op;
	cout << "\n������� 1� ������� : "; cin >> a;
	cout << "\n������� ���� �������� : "; cin >> op;
	cout << "\n������� 2� ������� : "; cin >> b;
	bool f = true;

	switch (op) {
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*': res = a * b; break;
	case '/': res = a / b; break;
	default: "n����������� ��������"; f = false;
	}

	if (f) cout << "\n���������: " << res;
	return 0;
}