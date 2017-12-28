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
			cout << "������� �� �����! ���������� ��� ���\n";
		}
		if (a > 0) break;
		else cout << "��������� �� ����� ���� ��������������! ���������� ��� ���\n";
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	a = b = c = NULL;
	cout << "������� ��������� �������������� ���������������:\n";
	a = check_input(a);
	b = check_input(b);
	c = check_input(c);
	cout << "������� ������ �����������: " << parall_s(a, b, c) << " (��. ��.)" << endl;
	cout << "����� �������������� ���������������: " << parall_v(a, b, c) << " (���. ��)" << endl;
	system("pause");
	return 0;
}
