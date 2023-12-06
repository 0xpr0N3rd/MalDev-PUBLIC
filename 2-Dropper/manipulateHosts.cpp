#include <iostream>
#include <fstream>

int main() {
    std::ofstream hostsFile;
    hostsFile.open("C:/Windows/System32/drivers/etc/hosts", std::ios::app); // Open hosts file in append mode

    if (hostsFile.is_open()) {
        hostsFile << "\n127.0.0.1 example.com"; // Adding the entry

        hostsFile.close();
        std::cout << "Success" << std::endl;
    }
    else {
        std::cerr << "Fail" << std::endl;
    }

    return 0;
}
