#include "../RSB.hpp"

const char* RED = "\x1b[1;31m";
const char* GREEN = "\x1b[1;32m";
const char* RESET = "\x1b[0m";

int main() {
	std::map<uint32_t, uint32_t> m = {
		{1, 1},
		{5, 4},
		{21, 21},
		{126, 289},
		{15098, 15601}
	};

	for (auto it : m) {
		uint32_t a = it.first;
		uint32_t b = it.second;
		uint32_t c = adder(a, b);
		if (a + b != c)
			cout << RED << "[FAIL !] " << RESET << endl;
		else
			cout << GREEN << "[CORRECT !] " << RESET << endl;
		cout << "Function output : " << c << endl;
		cout << "Expected output : " << a + b << endl; 
		cout << "-----" << endl;
	}
	return 0;
}