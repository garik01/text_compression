#pragma once

#include <iostream> //Ввод вывод текста в консоли
#include <cstdlib> //Изменение вида консоли
#include <string> //Для вывода стринговых переменных

using namespace std;

void background() {
	system("color 2F");
	setlocale(LC_ALL, "Russian");
}
