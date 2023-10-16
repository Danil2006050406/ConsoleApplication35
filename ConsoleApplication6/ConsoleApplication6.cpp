#include <iostream>
#include <windows.h>
using namespace std;

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    cout << "Hello, Савелий Ринсевич";
    return 0;
}