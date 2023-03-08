#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "russian"); // установка кириллицы
	int bottom = 0; // самое маленькое возможное число
	unsigned int middle = 0;// усредненное значение
	int answer;
	int top = 0; // самое большое возможное число
	printf("Привет,я умею угадывать твоё число...\n");
	printf("\t\tВведите диапозон вашего числа:\n");
	printf("Введите нижнюю границу = ");
	scanf_s("%u", &bottom);
	printf("Введите верхнюю границу = ");
	scanf_s("%u", &top);
	middle = (top - bottom) / 2 + bottom;
	if (top <= bottom || middle == 0) { // предусмотрение ошибочного ввода диапазона
		printf("\nОшибка ввода диапазона :(\n");
		return;

	}
	for (int i = 0; i <= 999; i++) {
		printf("Твоё число %u? (1 - больше , 2 - меньше , 3 - да это моё число! ) ", middle);
		scanf_s("%u", &answer);
		switch (answer) {
		case 1:
			middle+=2;
				if (middle > top) {// предусмотрение если число больше верхней границы
					middle = top;
				}
			break;
		case 2:
			if (middle == bottom) // предусмотрение если число меньше нижней границы
				middle = bottom;
			else
			{
				middle--;
			}

			break;
		case 3:
			printf("Ура мы справились, твоё число %u", middle);
			return;
		default:
			printf("Ошибочный ввод");
			return;
		}
	}
}
