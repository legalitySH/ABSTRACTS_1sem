#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "russian"); // ��������� ���������
	int bottom = 0; // ����� ��������� ��������� �����
	unsigned int middle = 0;// ����������� ��������
	int answer;
	int top = 0; // ����� ������� ��������� �����
	printf("������,� ���� ��������� ��� �����...\n");
	printf("\t\t������� �������� ������ �����:\n");
	printf("������� ������ ������� = ");
	scanf_s("%u", &bottom);
	printf("������� ������� ������� = ");
	scanf_s("%u", &top);
	middle = (top - bottom) / 2 + bottom;
	if (top <= bottom || middle == 0) { // �������������� ���������� ����� ���������
		printf("\n������ ����� ��������� :(\n");
		return;

	}
	for (int i = 0; i <= 999; i++) {
		printf("��� ����� %u? (1 - ������ , 2 - ������ , 3 - �� ��� �� �����! ) ", middle);
		scanf_s("%u", &answer);
		switch (answer) {
		case 1:
			middle+=2;
				if (middle > top) {// �������������� ���� ����� ������ ������� �������
					middle = top;
				}
			break;
		case 2:
			if (middle == bottom) // �������������� ���� ����� ������ ������ �������
				middle = bottom;
			else
			{
				middle--;
			}

			break;
		case 3:
			printf("��� �� ����������, ��� ����� %u", middle);
			return;
		default:
			printf("��������� ����");
			return;
		}
	}
}
