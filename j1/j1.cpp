#include <iostream>;
#include <string>;

using namespace std;

int jam(string a , string b) {
	if (stoi(b) == 0) {
		cout << "Erorr! cannot calculate reminder with zero";
		return 0;
	}
	return stoi(a) + stoi(b);
};

int menha(string a, string b) {
	if (stoi(b) == 0) {
		cout << "Erorr! cannot calculate reminder with zero";
		return 0;
	}
	return stoi(a) - stoi(b);
};

int zarb(string a, string b) {
	if (stoi(b) == 0) {
		cout << "Erorr! cannot calculate reminder with zero";
		return 0;
	}
	return stoi(a) * stoi(b);
};

int tagsim(string a, string b) {
	if (stoi(b) == 0) {
		cout << "Erorr! cannot calculate reminder with zero";
		return 0;
	}
	return stoi(a) / stoi(b);
};

int bagimandeh(string a, string b) {
	if (stoi(b) == 0) {
		cout << "Erorr! cannot calculate reminder with zero";
		return 0;
	}
	return stoi(a) % stoi(b);
};

int main() {
	bool is_true = 1;
	int result = 0;

	string operand;
	cout << "operand: ";
	cin >> operand;

	while (is_true) {
		string a, b;

		cout << "addad 1: ";
		cin >> a;
		
		if (a == "=") {
			is_true = 0;
			break;
		}

		cout << "addad 2: ";
		cin >> b;

		if (operand == "+") {
			result = result + jam(a, b);
		}
		else if (operand == "-") {
			result = result - menha(a, b);
		}
		else if (operand == "*") {
			result = result * zarb(a, b);
		}
		else if (operand == "/") {
			result = result / tagsim(a, b);
		}
		else if (operand == "%") {
			result = result % bagimandeh(a, b);
		}
	}
	cout << result;
	return 0;
};

