﻿// Homework 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(void)
{
	//Задание 1
	{
		short int shorty = 0;
		int i = 1;
		long long huge = 2ll;
		char symbol = '3';
		bool yes = true;
		float floaty = 5.5f;
		double dudu = 6.66;
	}

	//Задание 2
	enum chars
	{
		cross, circle, empty //Объявление перечисляемого типа chars со значениями "крестик", "нолик" и "пусто" для маркировки игрового поля
	};

	//Задание 3
	chars field[3][3] = { {empty, empty, empty }, { empty, empty, empty }, { empty, empty, empty } }; //создание двумерного массива field типа chars размером 3x3
	//и инициализация всех его элементов значением "пусто" для начала игры в "Крестики-нолики"

	//Задание 4
	{
		typedef struct TicTacToe
		{
			chars field[3][3]; //Игровое поле
			chars player1;	   //Игроки могут принимать значения "крестик"
			chars player2;     //или "нолик" в зависимости от предпочтений самих игроков
			bool turn;         //Флаг очередности хода для игроков (например, true для первого игрока и false для второго; инициализируется исходя из того, какой игрок при первом ходе
			//играет за "крестики")
		} Game; //Короткая запись структуры
	}

	//Задание 5
	{
		typedef union MyData //Определение структуры объединения MyData
		{
			int i;
			float f;
			char c;
		} MyData; //Короткая запись типа структуры объединения MyData

		typedef struct MyVariant //Определение структуры MyVariant
		{
			MyData X; //Переменная, принимающая одно из трех значений одного из трех типов
			short int isI : 1; //Флаг хранения в X целого значения
			short int isF : 1; //Флаг хранения в X дробного значения
			short int isC : 1; //Флаг хранения в X символа
		} MyVariant; //Короткая запись типа структуры MyVariant

		//Объявление и инициализация переменной целого типа и флагов
		{
			MyVariant integer;
			integer.X.i = 7;
			integer.isI = 1;
			integer.isF = 0;
			integer.isC = 0;
		}

		//Объявление и инициализация переменной дробного типа и флагов
		{
			MyVariant Float;
			Float.X.f = 7.7f;
			Float.isI = 0;
			Float.isF = 1;
			Float.isC = 0;
		}

		//Объявление и инициализация переменной символьного типа и флагов
		{
			MyVariant Char;
			Char.X.c = '7';
			Char.isI = 0;
			Char.isF = 0;
			Char.isC = 1;
		}
	}

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
