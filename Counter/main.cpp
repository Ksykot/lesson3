#include<iostream>

class Counter {
	int number;
	int number_b;
public:
	Counter() {
		int number;
	}

	int get_number_b() {
		return number_b;
	}

	void plus() {
		number + 1;
	}

	void minus() {
		number - 1;
	}

private:

	 int Counter_b(int number_b) {
		number_b = 1;
	}



};


int main() {

	setlocale(LC_ALL, "Russian");

	char p = '+', m = '-', c = '=', e = 'x';
	char answer, action;
	int number = 0;

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