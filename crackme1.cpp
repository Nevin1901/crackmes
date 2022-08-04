#include <iostream>

int main() {
    std::string passwd = "hello";

    std::string myPasswd;

    std::cin >> myPasswd;

    if (myPasswd == passwd) {
        std::cout << "done" << std::endl;
    }

    else {
        std::cout << "error" << std::endl;
    }
}
