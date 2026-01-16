#include <iostream>
#include <list>
#include <algorithm>
#include <bitset>

using namespace std;

uint32_t    gray_code(uint32_t n)
{
    uint32_t pos = 1, res = 0, bit = 0;
    std::bitset<16> y;
    while (n > 1)
    {
        y = n;
        std::cout << y << '\n';
        bit = (n & 1) ^ (n &  2);

        res += bit;

        pos *= 2;
        n >>= 1;
    }
    bit = n & pos;
    res += bit;
    return (res);

}

int main(int ac, char **av)
{
    (void)ac;
    uint32_t res = gray_code(atoi(av[1]));
    cout << res << endl;
}