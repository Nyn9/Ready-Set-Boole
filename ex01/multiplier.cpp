#include "../RSB.hpp"

uint32_t multiplier(uint32_t a, uint32_t b)
{
	uint32_t res = 0;
	while (b)
	{
		if (b & 1)
			res = adder(res, a);

		a <<= 1;
		b >>= 1;
	}
	return res;
}
