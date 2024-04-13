// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;



int main()
{
	setlocale(0, "rus");

	int tc, tf, res_tf;
	cout << " введите градус по цельсию \n ";
	cin >> tc;
	tf = (tc * 9 / 5) + 32;
	std::cout << tf;
}