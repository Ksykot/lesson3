#include<iostream>

class Counter {
public:
	int number = 0;
	char a;
	Counter() {
		int number = 1;
	}

	int get_number() {
		return number;
	}

	void plus() {
	   number + 1;
	}

	void minus() {
		number - 1;
	}

private:

	 int Counter_ (int number) {
		number = 1;
	}



};


int main() {

	setlocale(LC_ALL, "Russian");

	Counter counter;

	char p = '+', m = '-', c = '=', e = 'x';
	char answer, action;
	int number = 0;
	int g_n = counter.get_number();

	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> answer;
	counter.a = answer;
	if (answer == '��') {
		std::cout << "������� ��������� �������� ��������: ";
		std::cout << number << std::endl;
	}

	counter.get_number();

	do {
		std::cout << "������� �������('+' , '-' , '=' ��� 'x'):";
		std::cin >> action;

		if (action == '+') {
			counter.plus();
		}

		if (action == '-') {
			counter.minus();
		}


		if (action == '=') {
			std::cout << g_n << std::endl;
		}

		if (action == 'x') {
			std::cout << "�� ��������!";
		}
	} while (action != 'x');
}