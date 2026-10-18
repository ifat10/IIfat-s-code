#include <iostream>

int main() {
    std::cout << "Hello, Codespaces C++ world!\n";
    int a, b;
    std::cout << "Enter two integers: ";
    if (!(std::cin >> a >> b)) return 1;
    std::cout << "Sum: " << (a + b) << "\n";
    return 0;
}
