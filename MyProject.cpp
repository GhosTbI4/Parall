#include <iostream>

using namespace std;


float parall_s(float a, float b, float c)
{
	return 2 * (a*b + a*c + b*c);
}

float parall_v(float a, float b, float c)
{
	return a * b * c;
}

float check_input(float a)
{
	while (true)
	{
		while (!(cin >> a) || (cin.get() != '\n'))
		{
			cin.sync();
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введено не число! Попробуйте еще раз\n";
		}
		if (a > 0) break;
		else cout << "Измерения не могут быть отрицательными! Попробуйте еще раз\n";
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	a = b = c = NULL;
	cout << "Введите измерения прямоугольного параллелепипеда:\n";
	a = check_input(a);
	b = check_input(b);
	c = check_input(c);
	cout << "Площадь полной поверхности: " << parall_s(a, b, c) << " (кв. ед.)" << endl;
	cout << "Объем прямоугольного параллелепипеда: " << parall_v(a, b, c) << " (куб. ед)" << endl;
	system("pause");
	return 0;
}
