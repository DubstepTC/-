#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int a;
	int otv = 0;
	cout << "������� �����: " << endl;
	cin >> a;
	for (int i = 1; i <= 9; i++) {
		cout << "������ ������: " << a << " x " << i << endl;
		cout << "�����: ";
		cin >> otv;
		if (i == 9 and otv == a * i) {
			cout << "������� ������, �����������!";
			break;
		}
		if (otv == a * i) {
			cout << "������ ����� ���������! " << endl;
		}
		else {
			cout << "������, ������ ����� �������!";
			break;
		}
	}

	int _;
	cin >> _;

	return 0;
}