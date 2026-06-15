#include <iostream>
int main() {
    int m, d, s;
    std::cin >> m >> d;
    s = (m * 2 + d) % 3;
    switch (s)
    {
    case 0:
        std::cout << "普通" << std::endl;
        break;
    case 1:
        std::cout << "吉" << std::endl;
        break;
    case 2:
        std::cout << "大吉" << std::endl;
        break;
    default:
        break;
    } 
}