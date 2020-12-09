//Zakiev open-source project
#include <iostream>
#include <fstream>
#include <string>
#include "windows.h"

using namespace std;

int main()
{
	setlocale(0, "");
	ifstream read;
	ofstream write;
	string name;
	float a, b, c;
	int choise;
	lang: cout << "Select language:" << endl;
	cout << "1.English\n2.Russian" << endl;
	int lang;
	cin >> lang;
	switch (lang)
	{
	case 1:
	user_eng: read.open("data.txt");
		if (!read.is_open())
		{
			read.close();
			cout << "Welcome to Calculator by Zakiev\nWhat is your name?" << endl;
			cin >> name;
			write.open("data.txt");
			write << name;
			write.close();
			goto user_eng;
		}
		else
		{
			while (getline(read, name))
			{
			}
			cout << "Calculator by Zakiev\nCalculator welcomes you!" << endl;
			cout << "Hello " << name << "!" << endl;
			E: cout << "Select the operation you want to perform:" << endl;
			cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Change language\n6.Go out" << endl;
			cin >> choise;
			switch (choise)
			{
			case 1:
				cout << "Enter the first number:" << endl;
				cin >> a;
				cout << "Enter the second number:" << endl;
				cin >> b;
				c = a + b;
				cout << "The result of adding:" << endl << c << endl;
				Sleep(1000);
				goto E;

			case 2:
				cout << "Enter the first number:" << endl;
				cin >> a;
				cout << "Enter the second number:" << endl;
				cin >> b;
				c = a - b;
				cout << "The result of the subtraction:" << endl << c << endl;
				Sleep(1000);
				goto E;

			case 3:
				cout << "Enter the first number:" << endl;
				cin >> a;
				cout << "Enter the second number:" << endl;
				cin >> b;
				c = a * b;
				cout << "The result of the multiplication:" << endl << c << endl;
				Sleep(1000);
				goto E;

			case 4:
				cout << "Enter the first number:" << endl;
				cin >> a;
				cout << "Enter the second number:" << endl;
				cin >> b;
				c = a / b;
				cout << "The result of the division:" << endl << c << endl;
				Sleep(1000);
				goto E;

			case 5:
				goto lang;
				break;

			case 6:
				cout << "Thank you for using calculator by Zakiev!" << endl;
				cout << "Goodbye!" << endl;
				system("pause");
				return 0;
			}
			cout << "Error this operation does not exist!\nTry again!" << endl;
			goto E;
			break;
		}
	case 2:
	user_rus: read.open("data.txt");
		if (!read.is_open())
		{
			read.close();
			cout << "Добро пожаловать в Calculator by Zakiev\nКак вас зовут?" << endl;
			cin >> name;
			write.open("data.txt");
			write << name;
			write.close();
			goto user_rus;
		}
		else
		{
			while (getline(read, name))
			{
			}
			cout << "Calculator by Zakiev\nCalculator приветствует вас!" << endl;
			cout << "Здравствуйте " << name << "!" << endl;
		R: cout << "Выберите операцию которую хотите выполнить:" << endl;
			cout << "1.Сложение\n2.Вычитание\n3.Умножение\n4.Деление\n5.Сменить язык\n6.Выйти" << endl;
			cin >> choise;
			switch (choise)
			{
			case 1:
				cout << "Введите первое число:" << endl;
				cin >> a;
				cout << "Введите второе число:" << endl;
				cin >> b;
				c = a + b;
				cout << "Результат сложения:" << endl << c << endl;
				Sleep(1000);
				goto R;

			case 2:
				cout << "Введите первое число:" << endl;
				cin >> a;
				cout << "Введите второе число:" << endl;
				cin >> b;
				c = a - b;
				cout << "Результат вычитания:" << endl << c << endl;
				Sleep(1000);
				goto R;

			case 3:
				cout << "Введите первое число:" << endl;
				cin >> a;
				cout << "Введите второе число:" << endl;
				cin >> b;
				c = a * b;
				cout << "Результат умножения:" << endl << c << endl;
				Sleep(1000);
				goto R;

			case 4:
				cout << "Введите первое число:" << endl;
				cin >> a;
				cout << "Введите второе число:" << endl;
				cin >> b;
				c = a / b;
				cout << "Результат деления:" << endl << c << endl;
				Sleep(1000);
				goto R;

			case 5:
				goto lang;
				break;

			case 6:
				cout << "Спасибо за использование calculator by Zakiev!" << endl;
				cout << "До свидания!" << endl;
				system("pause");
				return 0;
			}
			cout << "Ошибка данной операции не существует!\nПопробуйте снова!" << endl;
			goto R;
			break;
		}
	}
}
