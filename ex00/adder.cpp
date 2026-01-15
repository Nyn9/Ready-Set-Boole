#include "../RSB.hpp"

uint32_t adder(uint32_t a, uint32_t b) {
	uint32_t carry = a & b;
	uint32_t res = a ^ b;
	while (carry)
	{
		uint32_t shift = carry << 1;
		carry = shift & res;
		res = shift ^ res;
	}
	return res;
}
