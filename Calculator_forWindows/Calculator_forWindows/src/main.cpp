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
			cout << "����� ���������� � Calculator by Zakiev\n��� ��� �����?" << endl;
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
			cout << "Calculator by Zakiev\nCalculator ������������ ���!" << endl;
			cout << "������������ " << name << "!" << endl;
		R: cout << "�������� �������� ������� ������ ���������:" << endl;
			cout << "1.��������\n2.���������\n3.���������\n4.�������\n5.������� ����\n6.�����" << endl;
			cin >> choise;
			switch (choise)
			{
			case 1:
				cout << "������� ������ �����:" << endl;
				cin >> a;
				cout << "������� ������ �����:" << endl;
				cin >> b;
				c = a + b;
				cout << "��������� ��������:" << endl << c << endl;
				Sleep(1000);
				goto R;

			case 2:
				cout << "������� ������ �����:" << endl;
				cin >> a;
				cout << "������� ������ �����:" << endl;
				cin >> b;
				c = a - b;
				cout << "��������� ���������:" << endl << c << endl;
				Sleep(1000);
				goto R;

			case 3:
				cout << "������� ������ �����:" << endl;
				cin >> a;
				cout << "������� ������ �����:" << endl;
				cin >> b;
				c = a * b;
				cout << "��������� ���������:" << endl << c << endl;
				Sleep(1000);
				goto R;

			case 4:
				cout << "������� ������ �����:" << endl;
				cin >> a;
				cout << "������� ������ �����:" << endl;
				cin >> b;
				c = a / b;
				cout << "��������� �������:" << endl << c << endl;
				Sleep(1000);
				goto R;

			case 5:
				goto lang;
				break;

			case 6:
				cout << "������� �� ������������� calculator by Zakiev!" << endl;
				cout << "�� ��������!" << endl;
				system("pause");
				return 0;
			}
			cout << "������ ������ �������� �� ����������!\n���������� �����!" << endl;
			goto R;
			break;
		}
	}
}
