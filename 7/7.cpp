// 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int i = 0;
	int q = 0;
	int xyz = 0;
	int count = 0;
	cout << "1) Горизонтальная линия\n2) Вертикальная линия\n3) Диагональная линия\n4) Квадрат\n5) Квадрат с заполнением\n6) Прямоугольник\n7) Прямоугольник с заполнением\n";
	cin >> xyz;
	system("cls");
	if (xyz < 6 && xyz > 0) {
		cout << "Выберите длину - ";
		cin >> count;
		//горизонтальная линия
		while (i < count && xyz ==  1)
		{
			cout << "-";
			i++;
		}
		//вертикальная линия
		while (i < count && xyz == 2)
		{
			cout << "|\n";
			i++;
		}
		//диагональная линия
		for (int i = 0; i < count && xyz == 3; ++i) {
			for (int j = 0; j < i; ++j) {
				cout << " ";
			}
			cout << "\\"<<endl;
			}
		//квадрат без заполнения
		for (int i = 0; i < count && xyz == 4; ++i) {
			cout << " * ";
		}
		cout << endl;
		for (int j = 0; j < count && xyz == 4; ++j) {
			if (j!=0 && j!=1) {
				cout << " * ";
				for (int k = 0; k < count; ++k) {
					if (k >= 0 && k < count - 2) {
						cout << "   ";
					}
				}
				cout << " * " << endl;
			}
		}
		for (int i = 0; i < count && xyz == 4; ++i) {
			cout << " * ";
		}
		//квадрат с заполнениемще
		for (int i = 0; i < count && xyz == 5; ++i) {
			cout << " * ";
		}
		cout << endl;
		for (int j = 0; j < count && xyz == 5; ++j) {
			if (j != 0 && j != 1) {
				cout << " * ";
				for (int k = 0; k < count; ++k) {
					if (k >= 0 && k < count - 1) {
						cout << " * ";
					}
				}
				cout << endl;
			}
		}
		for (int i = 0; i < count && xyz == 5; ++i) {
			cout << " * ";
		}
	}
	//прямоугольник
	else if  (xyz = 6,7) {
		int lng = 0;
		int shir = 0;
		cout << "Выберите длину - ";
		cin >> lng;
		cout << "Выберите ширину - ";
		cin >> shir;
		for (int i = 0; i < lng && xyz == 6; ++i) {
			cout << "* ";
		}
		cout << endl;
		for (int j = 0; j < shir && xyz == 6; ++j) {
			if (j != 0 && j != 1) {
				cout << "*";
				for (int k = 0; k < lng; ++k) {
					if (k >= 0 && k < lng - 2) {
						cout << "  ";
					}
				}
				if (j != 0 && j != 1){
					cout << " *" << endl;
				}
			}
		}
		for (int i = 0; i < lng && xyz == 6; ++i) {
			cout << "* ";
		}

		for (int i = 0; i < shir && xyz == 7; ++i) {
			for (int i = 0; i < lng && xyz == 7; ++i) {
				cout << "* ";
			}
			cout << endl;
		}

	}
	else {
		system("cls");
		cout << "Ошибка";
	}
	return 0;
}


