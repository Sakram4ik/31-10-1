#include <iostream>
#include <cstdlib>//бібліотека для функції random
#include <algorithm>//бібліотека для функції sort
using namespace std;
int main(void) {
	const int lenght = 12;//встановлений розмір масиву(незмінний)
	int m[lenght];

	for (int  i = 0; i < lenght; i++){
		m[i] = int(rand() % 100);//рандомні числа не більші 100
	}
	cout << "Array before :\n";
	for (int i = 0; i < lenght; i++)//виведення 12 елементів масиву, не більше ніж lenght
	{
		cout << m[i] << " ";
	}

	sort(m, m + lenght);//Here we take two parameters, the beginning of the
    //array and the length m upto which we want the array to
    //be sorted

	cout << "\nArray after  :\n";

	for (int i = 0; i < 12; i++){
		cout << m[i] << " ";//виведення відсортованого масиву
	}
	return 0;
}


