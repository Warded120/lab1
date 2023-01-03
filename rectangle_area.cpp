/*Напишіть програму для обчислення площі прямокутника. Довжини сторін фігури
мають вводитись з клавіатури.*/

#include <iostream>

using namespace std;

int main() 
{
	double length, width;
	cout << "Enter the length of a rectangle" << endl;
	cin >> length;
	cout << "Enter the width of a rectangle" << endl;
	cin >> width;
	cout << "S = " << length*width;
}
