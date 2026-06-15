#include <iostream>
int main() {
    int i;
    while (std::cin >> i)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) std::cout << "閏年" << std::endl;
        else std::cout << "平年" << std::endl;
    }
    
    return 0;
}