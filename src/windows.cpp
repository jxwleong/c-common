// https://stackoverflow.com/a/12803725
#include <Windows.h>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
    HANDLE process = GetCurrentProcess();
    DWORD_PTR processAffinityMask = 1 << atoi(argv[1]);

    BOOL success = SetProcessAffinityMask(process, processAffinityMask);

    cout << success << endl;
    return 0;
}