#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int a;
	int otv = 0;
	cout << "Введите число: " << endl;
	cin >> a;
	for (int i = 1; i <= 9; i++) {
		cout << "Решите пример: " << a << " x " << i << endl;
		cout << "Ответ: ";
		cin >> otv;
		if (i == 9 and otv == a * i) {
			cout << "Примеры решены, поздравляем!";
			break;
		}
		if (otv == a * i) {
			cout << "Пример решен правильно! " << endl;
		}
		else {
			cout << "Ошибка, пример решен неверно!";
			break;
		}
	}

	int _;
	cin >> _;

	return 0;
}