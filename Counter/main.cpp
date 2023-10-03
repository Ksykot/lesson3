#include<iostream>

class Counter {
	int number;
private:

	Counter(int number) {
		number = 1;
	}

	Counter(int number) {
		this -> number =  number;
	}

public:

	Counter() {

	}

	double plus() {
		return number + 1;
	}

	double minus() {
		return number - 1;
	 }
};

int main() {

	setlocale(LC_ALL, "Russian");

	char p = '+', m = '-', c = '=', e = 'x';
	char answer, action;
	int number;

	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> answer;
	Counter counter;
	if (answer == '��') {
		std::cout << "������� ��������� �������� ��������: ";
		std::cout << number << std::endl;
	}

	do {
		std::cout << "������� �������('+' , '-' , '=' ��� 'x'):";
		std::cin >> action;

		if (action == '+') {
			counter.plus();
		}

		if (action == '-') {
			counter.minus();
		}

		if (action == 'x') {
			std::cout << "�� ��������!";
		}
	} while (action != 'x');
}