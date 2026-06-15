#include <iostream>
int main() {
    int i, a, b, c, d;
    std::cin >> i;
    for (int n = 0; n < i; n++) {
        std::cin >> a >> b >> c >> d;
        std::cout << a << ' ' << b << ' ' << c << ' ' << d << ' ';
        if (b - a == d - c) std::cout << d + (d - c) << std::endl;
        else std::cout << (d * (d / c)) << std::endl;
    }

    return 0;
}